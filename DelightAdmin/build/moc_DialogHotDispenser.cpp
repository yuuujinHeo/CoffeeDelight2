/****************************************************************************
** Meta object code from reading C++ file 'DialogHotDispenser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DialogHotDispenser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogHotDispenser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogHotDispenser_t {
    QByteArrayData data[14];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogHotDispenser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogHotDispenser_t qt_meta_stringdata_DialogHotDispenser = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DialogHotDispenser"
QT_MOC_LITERAL(1, 19, 7), // "onTimer"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "onControl"
QT_MOC_LITERAL(4, 38, 9), // "readData1"
QT_MOC_LITERAL(5, 48, 9), // "readData2"
QT_MOC_LITERAL(6, 58, 12), // "handleError1"
QT_MOC_LITERAL(7, 71, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(8, 100, 5), // "error"
QT_MOC_LITERAL(9, 106, 12), // "handleError2"
QT_MOC_LITERAL(10, 119, 35), // "on_BTN_DISPENSE_HOT_BY_TIME_c..."
QT_MOC_LITERAL(11, 155, 36), // "on_BTN_DISPENSE_SODA_BY_TIME_..."
QT_MOC_LITERAL(12, 192, 37), // "on_BTN_DISPENSE_HOT_BY_TIME_3..."
QT_MOC_LITERAL(13, 230, 38) // "on_BTN_DISPENSE_SODA_BY_TIME_..."

    },
    "DialogHotDispenser\0onTimer\0\0onControl\0"
    "readData1\0readData2\0handleError1\0"
    "QSerialPort::SerialPortError\0error\0"
    "handleError2\0on_BTN_DISPENSE_HOT_BY_TIME_clicked\0"
    "on_BTN_DISPENSE_SODA_BY_TIME_clicked\0"
    "on_BTN_DISPENSE_HOT_BY_TIME_3_clicked\0"
    "on_BTN_DISPENSE_SODA_BY_TIME_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogHotDispenser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogHotDispenser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogHotDispenser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->onControl(); break;
        case 2: _t->readData1(); break;
        case 3: _t->readData2(); break;
        case 4: _t->handleError1((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->handleError2((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 6: _t->on_BTN_DISPENSE_HOT_BY_TIME_clicked(); break;
        case 7: _t->on_BTN_DISPENSE_SODA_BY_TIME_clicked(); break;
        case 8: _t->on_BTN_DISPENSE_HOT_BY_TIME_3_clicked(); break;
        case 9: _t->on_BTN_DISPENSE_SODA_BY_TIME_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogHotDispenser::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogHotDispenser.data,
    qt_meta_data_DialogHotDispenser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogHotDispenser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogHotDispenser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHotDispenser.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogHotDispenser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
