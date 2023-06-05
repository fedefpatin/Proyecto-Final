/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proyecto final info2/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "moverbarra"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "on_Start_clicked"
QT_MOC_LITERAL(4, 40, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 62, 5), // "mover"
QT_MOC_LITERAL(6, 68, 11), // "moverobjeto"
QT_MOC_LITERAL(7, 80, 1), // "x"
QT_MOC_LITERAL(8, 82, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(9, 115, 5), // "value"
QT_MOC_LITERAL(10, 121, 23), // "choque_Esfera_Obstaculo"
QT_MOC_LITERAL(11, 145, 7), // "Esfera*"
QT_MOC_LITERAL(12, 153, 1), // "S"
QT_MOC_LITERAL(13, 155, 10), // "Obstaculo*"
QT_MOC_LITERAL(14, 166, 1), // "O"
QT_MOC_LITERAL(15, 168, 19), // "choque_Extra_Esfera"
QT_MOC_LITERAL(16, 188, 8), // "Extra*[]"
QT_MOC_LITERAL(17, 197, 1), // "L"
QT_MOC_LITERAL(18, 199, 7), // "puntaje"
QT_MOC_LITERAL(19, 207, 12), // "mostrarLevel"
QT_MOC_LITERAL(20, 220, 3) // "Lev"

    },
    "MainWindow\0moverbarra\0\0on_Start_clicked\0"
    "on_pushButton_clicked\0mover\0moverobjeto\0"
    "x\0on_horizontalSlider_valueChanged\0"
    "value\0choque_Esfera_Obstaculo\0Esfera*\0"
    "S\0Obstaculo*\0O\0choque_Extra_Esfera\0"
    "Extra*[]\0L\0puntaje\0mostrarLevel\0Lev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    0,   69,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
      10,    2,   76,    2, 0x08 /* Private */,
      15,    2,   81,    2, 0x08 /* Private */,
      18,    0,   86,    2, 0x08 /* Private */,
      19,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 16,   12,   17,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moverbarra((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_Start_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->mover(); break;
        case 4: _t->moverobjeto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->choque_Esfera_Obstaculo((*reinterpret_cast< Esfera*(*)>(_a[1])),(*reinterpret_cast< Obstaculo*(*)>(_a[2]))); break;
        case 7: _t->choque_Extra_Esfera((*reinterpret_cast< Esfera*(*)>(_a[1])),(*reinterpret_cast< Extra*(*)[]>(_a[2]))); break;
        case 8: { int _r = _t->puntaje();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->mostrarLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::moverbarra)) {
                *result = 0;
                return;
            }
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::moverbarra(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
