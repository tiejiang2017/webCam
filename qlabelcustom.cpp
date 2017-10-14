#include "qlabelcustom.h"

QLabelCustom::QLabelCustom(QWidget *parent) : QLabel(parent)
{

}

void QLabelCustom::mouseReleaseEvent(QMouseEvent *event)
{
    if (Qt ::RightButton == event->button())
    {
       emit sendMouse(labelId , event->pos());
    }
}

void QLabelCustom::mousePressEvent(QMouseEvent *event)
{

}
