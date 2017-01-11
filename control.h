#ifndef CONTROL_H
#define CONTROL_H

#include<QMouseEvent>
#include<QImage>
#include<QAction>
#include<QColor>
#include<QMainWindow>

class Model;
class View;
class Canvas;


class Control
{
private:
    Model *model;
    View *view;
    Canvas *canvas;
public:
    Control(Model *model, View *view);
    // Functions executed on mouse event
    void mousePress(QMouseEvent *mp);
    void mouseMove(QMouseEvent *mm);
    void mouseRelease(QMouseEvent *mr);
    // Handles resize of the window
    void resize(QResizeEvent* re);
    // Gets image for painting
    QImage getImage();
    void setTool(QAction*);
    void setColor(QColor*);
    void setThickness(int);
    void createNew();
    void save(const QString &, const char *, int);
    void load(const QString& , const char *);
    void print();

};

#endif // CONTROL_H
