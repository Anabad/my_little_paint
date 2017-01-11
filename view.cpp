#include "view.h"
#include "ui_mainWindow.h"

#include "control.h"


View::View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);

    // All connections for menu events on the canvas
    connect(ui->menuTools,SIGNAL(triggered(QAction*)),this,SLOT(setTool(QAction*)));
    connect(ui->actionColor,SIGNAL(triggered()),this,SLOT(setColor()));
    connect(ui->actionThickness,SIGNAL(triggered()),this,SLOT(setThickness()));
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(createNew()));
    connect(ui->actionSave,SIGNAL(triggered()),this,SLOT(save()));
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(load()));
    connect(ui->actionPrint,SIGNAL(triggered()),this,SLOT(print()));


    // Insertion of canvas widget
    canvas = new Canvas();
    ui->gridLayout->addWidget(canvas);


    // Assure que le programme se ferme lorsque la fenetre est fermee
    this->setAttribute(Qt::WA_QuitOnClose);


}

View::~View()
{
    delete ui;
}

// Sets the drawing tool
void View::setTool(QAction * tool){
    control->setTool(tool);
}

// Sets the pen color
void View::setColor(){
    QColor newColor = QColorDialog::getColor();
    control->setColor(&newColor);
}

// Sets the pen thickness
void View::setThickness(){
    bool ok;
    int newThickness = QInputDialog::getInt(this, tr("My Little Paint"),
                                        tr("Select pen width:"),0,1, 50, 1, &ok);
    if (ok)
       control->setThickness(newThickness);
}



// Creates new canvas
void View::createNew(){
    control->createNew();
    canvas->update();
}

// Saves current canvas
void View::save(){
    // Gerer le cancel
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                "../",
                                tr("*.png")).section(".",0,0).append(".png");
    control->save(fileName,"png",-1);
}

// Loads a png image
void View::load(){
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"../",tr("*.png"));
    if (!fileName.isEmpty()){
        control->load(fileName,0);
    }
}

// Prints drawing to PDF file
void View::print(){
    control->print();

}
