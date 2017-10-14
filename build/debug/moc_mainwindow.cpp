/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "onTimeOut"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 28), // "on_splitScreenOneBtn_clicked"
QT_MOC_LITERAL(4, 51, 29), // "on_splitScreenFourBtn_clicked"
QT_MOC_LITERAL(5, 81, 28), // "on_splitScreenSixBtn_clicked"
QT_MOC_LITERAL(6, 110, 29), // "on_splitScreenNineBtn_clicked"
QT_MOC_LITERAL(7, 140, 32), // "on_splitScreenSixteenBtn_clicked"
QT_MOC_LITERAL(8, 173, 18), // "onServerBtnConnect"
QT_MOC_LITERAL(9, 192, 16), // "onRefreshBtnPlay"
QT_MOC_LITERAL(10, 209, 19), // "on_CloseBtn_clicked"
QT_MOC_LITERAL(11, 229, 23), // "on_AddServerBtn_clicked"
QT_MOC_LITERAL(12, 253, 9), // "recvImage"
QT_MOC_LITERAL(13, 263, 3), // "img"
QT_MOC_LITERAL(14, 267, 3), // "cId"
QT_MOC_LITERAL(15, 271, 25), // "on_loadServersBtn_clicked"
QT_MOC_LITERAL(16, 297, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(17, 330, 5), // "value"
QT_MOC_LITERAL(18, 336, 9), // "recvMouse"
QT_MOC_LITERAL(19, 346, 7), // "labelID"
QT_MOC_LITERAL(20, 354, 1), // "p"
QT_MOC_LITERAL(21, 356, 16), // "on_OKBtn_clicked"
QT_MOC_LITERAL(22, 373, 16) // "on_NOBtn_clicked"

    },
    "MainWindow\0onTimeOut\0\0"
    "on_splitScreenOneBtn_clicked\0"
    "on_splitScreenFourBtn_clicked\0"
    "on_splitScreenSixBtn_clicked\0"
    "on_splitScreenNineBtn_clicked\0"
    "on_splitScreenSixteenBtn_clicked\0"
    "onServerBtnConnect\0onRefreshBtnPlay\0"
    "on_CloseBtn_clicked\0on_AddServerBtn_clicked\0"
    "recvImage\0img\0cId\0on_loadServersBtn_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "recvMouse\0labelID\0p\0on_OKBtn_clicked\0"
    "on_NOBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    2,  104,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    1,  110,    2, 0x08 /* Private */,
      18,    2,  113,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage, QMetaType::QString,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QPoint,   19,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimeOut(); break;
        case 1: _t->on_splitScreenOneBtn_clicked(); break;
        case 2: _t->on_splitScreenFourBtn_clicked(); break;
        case 3: _t->on_splitScreenSixBtn_clicked(); break;
        case 4: _t->on_splitScreenNineBtn_clicked(); break;
        case 5: _t->on_splitScreenSixteenBtn_clicked(); break;
        case 6: _t->onServerBtnConnect(); break;
        case 7: _t->onRefreshBtnPlay(); break;
        case 8: _t->on_CloseBtn_clicked(); break;
        case 9: _t->on_AddServerBtn_clicked(); break;
        case 10: _t->recvImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->on_loadServersBtn_clicked(); break;
        case 12: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->recvMouse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 14: _t->on_OKBtn_clicked(); break;
        case 15: _t->on_NOBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
