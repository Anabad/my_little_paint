#include "canvas.h"
#include "control.h"

Canvas::Canvas()
{
}

// Paint event triggered when user paints on canvas
void Canvas::paintEvent(QPaintEvent *pe){
    QWidget::paintEvent(pe);
    QPainter p(this);
    QImage img = control->getImage();
    p.drawImage(0,0,img);
    p.end();
}

void Canvas::mousePressEvent(QMouseEvent *mp){
    control->mousePress(mp);
}

void Canvas::mouseMoveEvent(QMouseEvent *mm){
    control->mouseMove(mm);
    update();
}

void Canvas::mouseReleaseEvent(QMouseEvent *mr){
    control->mouseRelease(mr);
    update();
}

// Resizes the canvas when window is resized
void Canvas::resizeEvent(QResizeEvent * re){
    control->resize(re);
    update();
    QWidget::resizeEvent(re);
}
