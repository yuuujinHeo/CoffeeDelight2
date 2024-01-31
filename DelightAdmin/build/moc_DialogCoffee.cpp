/****************************************************************************
** Meta object code from reading C++ file 'DialogCoffee.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DialogCoffee.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogCoffee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogCoffee_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogCoffee_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogCoffee_t qt_meta_stringdata_DialogCoffee = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogCoffee"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "disconnected"
QT_MOC_LITERAL(4, 37, 8), // "gotError"
QT_MOC_LITERAL(5, 46, 11), // "onConnected"
QT_MOC_LITERAL(6, 58, 14), // "onDisconnected"
QT_MOC_LITERAL(7, 73, 9), // "onSendMsg"
QT_MOC_LITERAL(8, 83, 13), // "onReceivedMsg"
QT_MOC_LITERAL(9, 97, 7), // "message"
QT_MOC_LITERAL(10, 105, 10), // "onGotError"
QT_MOC_LITERAL(11, 116, 7), // "onTimer"
QT_MOC_LITERAL(12, 124, 34), // "on_BTN_REQUEST_BUTTON_LIST_cl..."
QT_MOC_LITERAL(13, 159, 24) // "on_BTN_DRINK_OUT_clicked"

    },
    "DialogCoffee\0connected\0\0disconnected\0"
    "gotError\0onConnected\0onDisconnected\0"
    "onSendMsg\0onReceivedMsg\0message\0"
    "onGotError\0onTimer\0"
    "on_BTN_REQUEST_BUTTON_LIST_clicked\0"
    "on_BTN_DRINK_OUT_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogCoffee[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogCoffee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogCoffee *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->gotError(); break;
        case 3: _t->onConnected(); break;
        case 4: _t->onDisconnected(); break;
        case 5: _t->onSendMsg(); break;
        case 6: _t->onReceivedMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onGotError(); break;
        case 8: _t->onTimer(); break;
        case 9: _t->on_BTN_REQUEST_BUTTON_LIST_clicked(); break;
        case 10: _t->on_BTN_DRINK_OUT_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogCoffee::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogCoffee::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogCoffee::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogCoffee::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DialogCoffee::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogCoffee::gotError)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogCoffee::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogCoffee.data,
    qt_meta_data_DialogCoffee,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogCoffee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogCoffee::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogCoffee.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogCoffee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DialogCoffee::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogCoffee::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DialogCoffee::gotError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
