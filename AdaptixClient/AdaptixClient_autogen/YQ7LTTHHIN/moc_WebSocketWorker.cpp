/****************************************************************************
** Meta object code from reading C++ file 'WebSocketWorker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/Workers/WebSocketWorker.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebSocketWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_WebSocketWorker_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[14];
    char stringdata5[5];
    char stringdata6[17];
    char stringdata7[13];
    char stringdata8[16];
    char stringdata9[25];
    char stringdata10[9];
    char stringdata11[29];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WebSocketWorker_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_WebSocketWorker_t qt_meta_stringdata_WebSocketWorker = {
    {
        QT_MOC_LITERAL(0, 15),  // "WebSocketWorker"
        QT_MOC_LITERAL(16, 9),  // "connected"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "ws_error"
        QT_MOC_LITERAL(36, 13),  // "received_data"
        QT_MOC_LITERAL(50, 4),  // "data"
        QT_MOC_LITERAL(55, 16),  // "websocket_closed"
        QT_MOC_LITERAL(72, 12),  // "is_connected"
        QT_MOC_LITERAL(85, 15),  // "is_disconnected"
        QT_MOC_LITERAL(101, 24),  // "is_binaryMessageReceived"
        QT_MOC_LITERAL(126, 8),  // "is_error"
        QT_MOC_LITERAL(135, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(164, 5)   // "error"
    },
    "WebSocketWorker",
    "connected",
    "",
    "ws_error",
    "received_data",
    "data",
    "websocket_closed",
    "is_connected",
    "is_disconnected",
    "is_binaryMessageReceived",
    "is_error",
    "QAbstractSocket::SocketError",
    "error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_WebSocketWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    0,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   68,    2, 0x0a,    6 /* Public */,
       8,    0,   69,    2, 0x0a,    7 /* Public */,
       9,    1,   70,    2, 0x0a,    8 /* Public */,
      10,    1,   73,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject WebSocketWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_WebSocketWorker.offsetsAndSizes,
    qt_meta_data_WebSocketWorker,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_WebSocketWorker_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WebSocketWorker, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ws_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'received_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'websocket_closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'is_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'is_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'is_binaryMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'is_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>
    >,
    nullptr
} };

void WebSocketWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebSocketWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->ws_error(); break;
        case 2: _t->received_data((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->websocket_closed(); break;
        case 4: _t->is_connected(); break;
        case 5: _t->is_disconnected(); break;
        case 6: _t->is_binaryMessageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 7: _t->is_error((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebSocketWorker::*)();
            if (_t _q_method = &WebSocketWorker::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebSocketWorker::*)();
            if (_t _q_method = &WebSocketWorker::ws_error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebSocketWorker::*)(QByteArray );
            if (_t _q_method = &WebSocketWorker::received_data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebSocketWorker::*)();
            if (_t _q_method = &WebSocketWorker::websocket_closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *WebSocketWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebSocketWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebSocketWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WebSocketWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WebSocketWorker::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WebSocketWorker::ws_error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WebSocketWorker::received_data(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebSocketWorker::websocket_closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
