#ifndef MODEL_H
#define MODEL_H

#include<QImage>
#include<QPen>
#include<QMouseEvent>
#include<QPoint>
#include<QPainter>
#include<QAction>
#include<QString>
#include<QColor>
#include<QPrinter>
#include<QPrintDialog>
#include<QMainWindow>
#include"math.h"

class Control;

class Model
{
private:
    QImage img;
    QImage tempimg;
    QPen pen;
    QPoint start;
    QPoint end;
    QString tool;
    QString fileName;
    bool modified;

public:
    Model();
    void mousePress(QMouseEvent *mp);
    void mouseMove(QMouseEvent *mm);
    void mouseRelease(QMouseEvent *mr);
    void drawing();
    void resize(QResizeEvent* re);
    void resizeImage(const QSize &);
    // Accesseurs
    QImage getImage(){return this->tempimg;}
    QPen getPen(){return pen;}
    void setPen(QPen pen){this->pen = pen;}
    void setTool(QAction*);
    void setColor(QColor*);
    void setThickness(int);
    // File functions
    void save(const QString &, const char *, int);
    void load(const QString& , const char *);
    void createNew();
    void print();

};

#endif // MODEL_H
