#ifndef QLABELCUSTOM_H
#define QLABELCUSTOM_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class QLabelCustom : public QLabel
{
    Q_OBJECT
public:
    explicit QLabelCustom(QWidget *parent = 0);

    void mouseReleaseEvent(QMouseEvent * event);
    void mousePressEvent(QMouseEvent * event);
    int labelId;

signals:
    void sendMouse(int labelId,QPoint p);

public slots:
};

#endif // QLABELCUSTOM_H
