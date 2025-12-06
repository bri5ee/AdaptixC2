/****************************************************************************
** Meta object code from reading C++ file 'ScreenshotsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/UI/Widgets/ScreenshotsWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenshotsWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ImageFrame_t {
    uint offsetsAndSizes[8];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ImageFrame_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ImageFrame_t qt_meta_stringdata_ImageFrame = {
    {
        QT_MOC_LITERAL(0, 10),  // "ImageFrame"
        QT_MOC_LITERAL(11, 11),  // "resizeImage"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 9)   // "setPixmap"
    },
    "ImageFrame",
    "resizeImage",
    "",
    "setPixmap"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ImageFrame[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       3,    1,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ImageFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ImageFrame.offsetsAndSizes,
    qt_meta_data_ImageFrame,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ImageFrame_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageFrame, std::true_type>,
        // method 'resizeImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPixmap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>
    >,
    nullptr
} };

void ImageFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeImage(); break;
        case 1: _t->setPixmap((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ImageFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_ScreenshotsWidget_t {
    uint offsetsAndSizes[22];
    char stringdata0[18];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[22];
    char stringdata7[4];
    char stringdata8[13];
    char stringdata9[11];
    char stringdata10[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScreenshotsWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ScreenshotsWidget_t qt_meta_stringdata_ScreenshotsWidget = {
    {
        QT_MOC_LITERAL(0, 17),  // "ScreenshotsWidget"
        QT_MOC_LITERAL(18, 20),  // "onTableItemSelection"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 11),  // "QModelIndex"
        QT_MOC_LITERAL(52, 7),  // "current"
        QT_MOC_LITERAL(60, 8),  // "previous"
        QT_MOC_LITERAL(69, 21),  // "handleScreenshotsMenu"
        QT_MOC_LITERAL(91, 3),  // "pos"
        QT_MOC_LITERAL(95, 12),  // "actionDelete"
        QT_MOC_LITERAL(108, 10),  // "actionNote"
        QT_MOC_LITERAL(119, 14)   // "actionDownload"
    },
    "ScreenshotsWidget",
    "onTableItemSelection",
    "",
    "QModelIndex",
    "current",
    "previous",
    "handleScreenshotsMenu",
    "pos",
    "actionDelete",
    "actionNote",
    "actionDownload"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ScreenshotsWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       6,    1,   49,    2, 0x0a,    4 /* Public */,
       8,    0,   52,    2, 0x10a,    6 /* Public | MethodIsConst  */,
       9,    0,   53,    2, 0x10a,    7 /* Public | MethodIsConst  */,
      10,    0,   54,    2, 0x10a,    8 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScreenshotsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DockTab::staticMetaObject>(),
    qt_meta_stringdata_ScreenshotsWidget.offsetsAndSizes,
    qt_meta_data_ScreenshotsWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ScreenshotsWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScreenshotsWidget, std::true_type>,
        // method 'onTableItemSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'handleScreenshotsMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'actionDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ScreenshotsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenshotsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTableItemSelection((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->handleScreenshotsMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->actionDelete(); break;
        case 3: _t->actionNote(); break;
        case 4: _t->actionDownload(); break;
        default: ;
        }
    }
}

const QMetaObject *ScreenshotsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenshotsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenshotsWidget.stringdata0))
        return static_cast<void*>(this);
    return DockTab::qt_metacast(_clname);
}

int ScreenshotsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
