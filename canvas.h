#ifndef CANVAS_H
#define CANVAS_H

#include<QWidget>
#include<QImage>
#include<QPoint>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QPainter>
#include<QColor>

class Control;

class Canvas : public QWidget{
Q_OBJECT
private:
    QColor mypenColor;
    Control *control;
public:
    Canvas();
    void setControl(Control *control) {
        this->control = control;
    }
    QColor penColor(){return mypenColor;}
    void setColor(QColor);
protected:
    void paintEvent(QPaintEvent *);
    void  mousePressEvent( QMouseEvent * );
    void  mouseMoveEvent( QMouseEvent * );
    void  mouseReleaseEvent( QMouseEvent * );
    void resizeEvent(QResizeEvent*);

};

#endif // CANVAS_H
