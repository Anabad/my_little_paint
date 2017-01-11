#include "control.h"
#include "model.h"
#include "view.h"
#include "canvas.h"



Control::Control(Model *model, View *view) :
    view(view)

{
    this->model = model;
    view->setControl(this);
    view->getCanvas()->setControl(this);
}

// Mouse event handling
void Control::mousePress(QMouseEvent *mp){
    model->mousePress(mp);
}

void Control::mouseMove(QMouseEvent *mm){
    model->mouseMove(mm);
}

void Control::mouseRelease(QMouseEvent *mr){
    model->mouseRelease(mr);
}

// Resize event handling
void Control::resize(QResizeEvent* re){
    model->resize(re);
}


// Image return handling
QImage Control::getImage(){
    return model->getImage();
}

// Tool change handling
void Control::setTool(QAction * tool){
    model->setTool(tool);
}

void Control::setColor(QColor * penColor){
    model->setColor(penColor);
}

void Control::setThickness(int t){
    model->setThickness(t);
}

// File operation handling

void Control::createNew(){
    model->createNew();
}

void Control::save(const QString & fileName, const char * format = 0 , int quality = -1){
    model->save(fileName,format,quality);
}

void Control::load(const QString & fileName, const char * format = 0 ){
    model->load(fileName,format);
}

void Control::print(){
    model->print();
}
