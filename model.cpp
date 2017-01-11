#include "model.h"
#include "control.h"

Model::Model():
    img(400,400,QImage::Format_ARGB32),
    pen(Qt::black,1,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin)
{
    img.fill(Qt::white);
    tempimg = img;
    tool = "Brush";
    modified = false;
    fileName = "newFile.png";
}

// Sets a start point where mouse is pressed
void Model::mousePress(QMouseEvent *mp){
    start = mp->pos();
}

// Sets an end point and calls drawing function on a temporary image
void Model::mouseMove(QMouseEvent *mm){
    end = mm->pos();
    if(tool!="Brush"){
        tempimg = img;
    }
    drawing();
}

// Sets an end point and copies final result to permanent image
void Model::mouseRelease(QMouseEvent *mr){
    end = mr->pos();
    drawing();
    img = tempimg;
}

// Deterrmines how the image should be resized
void Model::resize(QResizeEvent* re){
    if (re->size().width() > img.width() || re->size().height() > img.height()) {
        int newWidth = qMax(re->size().width() + 128, img.width());
        int newHeight = qMax(re->size().height() + 128, img.height());
        resizeImage(QSize(newWidth, newHeight));
    }
}

// Resizes the image
void Model::resizeImage(const QSize &newSize)
{
    if (img.size() == newSize){
        return;
    }
    QImage newImage(newSize, QImage::Format_ARGB32);
    newImage.fill(qRgb(255, 255, 255));
    QPainter painter(&newImage);
    painter.drawImage(QPoint(0, 0), img);
    img = newImage;
    tempimg = newImage;
}

// Draws onto temp image based on user mouse input and selected tool
void Model::drawing(){
    QPainter p(&tempimg);
    p.setPen(pen);
    // Draws a succesion of lines to emulate a brush tool
    if (tool == "Brush"){
      p.drawLine(start,end);
      start = end;
    }
    // Draws a line from point start to point end
    else if (tool == "Line"){
        p.drawLine(start,end);
    }
    // Draws a rectangle with start as top left corner and end as bottom right corner
    else if (tool == "Rectangle"){
        QRect rect(start,end);
        p.drawRect(rect);
    }
    // Draws an ellipse inside of a rectangle with start as top left corner and end as bottom right corner
    else if(tool == "Ellipse"){
        QRect rect(start,end);
        p.drawEllipse(rect);
    }
    // Draws a circle with start as center and end as a point on the circle
    else if (tool=="Circle"){
        int r = int(sqrt(pow(double(end.x()-start.x()),2.0)+pow(double(end.y()-start.y()),2.0)));
        p.drawEllipse(start,r,r);

    }\
    p.end();
}

// Tool and pen modification functions
void Model::setTool(QAction * tool){
   this->tool = tool->text();
}

void Model::setColor(QColor *color){
   this->pen.setColor(*color);
}

void Model::setThickness(int t){
    this->pen.setWidth(t);
}

// File operations

void Model::createNew(){
    img.fill(Qt::white);
    tempimg.fill(Qt::white);
}

void Model::save(const QString & fileName, const char * format = 0 , int quality = -1){
    img.save(fileName,format,quality);
    this->fileName = fileName;
}

void Model::load(const QString & fileName, const char * format = 0 ){
    img.load(fileName,format);
    tempimg = img;
    this->fileName = fileName;
}

void Model::print(){
    QTransform t;
    QImage turnedImage = img.transformed(t.rotate(90));
    QImage scaledImage = turnedImage.scaled(QSize(qMin(825,turnedImage.width()),qMin(1169,turnedImage.height())));
    QString cropped_fileName=fileName.section(".",0,0);
    cropped_fileName.append(".pdf");
    QPrinter printer(QPrinter::HighResolution);
    printer.setResolution(100);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(cropped_fileName);
    QPainter painter(&printer);
    painter.drawImage(0,0,scaledImage);
}
