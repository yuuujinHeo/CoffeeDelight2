/****************************************************************************
** Meta object code from reading C++ file 'DialogOutlet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DialogOutlet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogOutlet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogOutlet_t {
    QByteArrayData data[13];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogOutlet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogOutlet_t qt_meta_stringdata_DialogOutlet = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogOutlet"
QT_MOC_LITERAL(1, 13, 7), // "onTimer"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 30), // "on_BTN_ENABLE_MODULE_1_clicked"
QT_MOC_LITERAL(4, 53, 30), // "on_BTN_ENABLE_MODULE_2_clicked"
QT_MOC_LITERAL(5, 84, 30), // "on_BTN_ENABLE_MODULE_3_clicked"
QT_MOC_LITERAL(6, 115, 30), // "on_BTN_ENABLE_MODULE_4_clicked"
QT_MOC_LITERAL(7, 146, 30), // "on_BTN_ENABLE_MODULE_5_clicked"
QT_MOC_LITERAL(8, 177, 32), // "on_BTN_OUTLET_DISPENSE_1_clicked"
QT_MOC_LITERAL(9, 210, 32), // "on_BTN_OUTLET_DISPENSE_2_clicked"
QT_MOC_LITERAL(10, 243, 32), // "on_BTN_OUTLET_DISPENSE_3_clicked"
QT_MOC_LITERAL(11, 276, 32), // "on_BTN_OUTLET_DISPENSE_4_clicked"
QT_MOC_LITERAL(12, 309, 32) // "on_BTN_OUTLET_DISPENSE_5_clicked"

    },
    "DialogOutlet\0onTimer\0\0"
    "on_BTN_ENABLE_MODULE_1_clicked\0"
    "on_BTN_ENABLE_MODULE_2_clicked\0"
    "on_BTN_ENABLE_MODULE_3_clicked\0"
    "on_BTN_ENABLE_MODULE_4_clicked\0"
    "on_BTN_ENABLE_MODULE_5_clicked\0"
    "on_BTN_OUTLET_DISPENSE_1_clicked\0"
    "on_BTN_OUTLET_DISPENSE_2_clicked\0"
    "on_BTN_OUTLET_DISPENSE_3_clicked\0"
    "on_BTN_OUTLET_DISPENSE_4_clicked\0"
    "on_BTN_OUTLET_DISPENSE_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogOutlet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void DialogOutlet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogOutlet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->on_BTN_ENABLE_MODULE_1_clicked(); break;
        case 2: _t->on_BTN_ENABLE_MODULE_2_clicked(); break;
        case 3: _t->on_BTN_ENABLE_MODULE_3_clicked(); break;
        case 4: _t->on_BTN_ENABLE_MODULE_4_clicked(); break;
        case 5: _t->on_BTN_ENABLE_MODULE_5_clicked(); break;
        case 6: _t->on_BTN_OUTLET_DISPENSE_1_clicked(); break;
        case 7: _t->on_BTN_OUTLET_DISPENSE_2_clicked(); break;
        case 8: _t->on_BTN_OUTLET_DISPENSE_3_clicked(); break;
        case 9: _t->on_BTN_OUTLET_DISPENSE_4_clicked(); break;
        case 10: _t->on_BTN_OUTLET_DISPENSE_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DialogOutlet::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DialogOutlet.data,
    qt_meta_data_DialogOutlet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogOutlet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogOutlet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogOutlet.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogOutlet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
