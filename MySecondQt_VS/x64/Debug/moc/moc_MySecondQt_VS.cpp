/****************************************************************************
** Meta object code from reading C++ file 'MySecondQt_VS.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MySecondQt_VS.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MySecondQt_VS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MySecondQt_VS_t {
    const uint offsetsAndSize[12];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MySecondQt_VS_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MySecondQt_VS_t qt_meta_stringdata_MySecondQt_VS = {
    {
QT_MOC_LITERAL(0, 13), // "MySecondQt_VS"
QT_MOC_LITERAL(14, 11), // "img_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 9), // "save_gray"
QT_MOC_LITERAL(37, 10), // "save_black"
QT_MOC_LITERAL(48, 8) // "show_all"

    },
    "MySecondQt_VS\0img_clicked\0\0save_gray\0"
    "save_black\0show_all"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySecondQt_VS[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MySecondQt_VS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MySecondQt_VS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->img_clicked(); break;
        case 1: _t->save_gray(); break;
        case 2: _t->save_black(); break;
        case 3: _t->show_all(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MySecondQt_VS::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MySecondQt_VS.offsetsAndSize,
    qt_meta_data_MySecondQt_VS,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MySecondQt_VS_t
, QtPrivate::TypeAndForceComplete<MySecondQt_VS, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MySecondQt_VS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySecondQt_VS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MySecondQt_VS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MySecondQt_VS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
