/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Ant-Simulator/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_AboutButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_ConfigsButton_clicked"
QT_MOC_LITERAL(4, 60, 25), // "on_SimulateButton_clicked"
QT_MOC_LITERAL(5, 86, 21), // "on_MenuButton_clicked"
QT_MOC_LITERAL(6, 108, 23), // "on_MenuButton_2_clicked"
QT_MOC_LITERAL(7, 132, 21), // "on_gitCodeBtn_clicked"
QT_MOC_LITERAL(8, 154, 16), // "on_soBtn_clicked"
QT_MOC_LITERAL(9, 171, 19), // "on_lkdinBtn_clicked"
QT_MOC_LITERAL(10, 191, 24), // "on_gitProfileBtn_clicked"
QT_MOC_LITERAL(11, 216, 25), // "on_antsSlider_sliderMoved"
QT_MOC_LITERAL(12, 242, 8), // "position"
QT_MOC_LITERAL(13, 251, 28), // "on_showPathsBox_stateChanged"
QT_MOC_LITERAL(14, 280, 4), // "arg1"
QT_MOC_LITERAL(15, 285, 21) // "on_QuitButton_clicked"

    },
    "MainWindow\0on_AboutButton_clicked\0\0"
    "on_ConfigsButton_clicked\0"
    "on_SimulateButton_clicked\0"
    "on_MenuButton_clicked\0on_MenuButton_2_clicked\0"
    "on_gitCodeBtn_clicked\0on_soBtn_clicked\0"
    "on_lkdinBtn_clicked\0on_gitProfileBtn_clicked\0"
    "on_antsSlider_sliderMoved\0position\0"
    "on_showPathsBox_stateChanged\0arg1\0"
    "on_QuitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AboutButton_clicked(); break;
        case 1: _t->on_ConfigsButton_clicked(); break;
        case 2: _t->on_SimulateButton_clicked(); break;
        case 3: _t->on_MenuButton_clicked(); break;
        case 4: _t->on_MenuButton_2_clicked(); break;
        case 5: _t->on_gitCodeBtn_clicked(); break;
        case 6: _t->on_soBtn_clicked(); break;
        case 7: _t->on_lkdinBtn_clicked(); break;
        case 8: _t->on_gitProfileBtn_clicked(); break;
        case 9: _t->on_antsSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_showPathsBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_QuitButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE