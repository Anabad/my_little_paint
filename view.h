#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include<QColor>
#include"canvas.h"
#include<QVBoxLayout>

class Control;

namespace Ui {
class View;
class Canvas;
}

class View : public QMainWindow
{
    Q_OBJECT

public:
    explicit View(QWidget *parent = 0);
    ~View();

    void setControl(Control *control) {
        this->control = control;
    }
    // Canvas widget that handles drawing
    Canvas* getCanvas(){
        return canvas;
    }
protected slots:
    // Slots tied to menu actions
    void setTool(QAction*);
    void setColor();
    void setThickness();
    void createNew();
    void save();
    void load();
    void print();

private:
    Ui::View *ui;
    Canvas *canvas;
    Control *control;
};

#endif // VIEW_H
