/****************************************************************************
** Meta object code from reading C++ file 'mainapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainApplication_t {
    QByteArrayData data[11];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainApplication_t qt_meta_stringdata_MainApplication = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MainApplication"
QT_MOC_LITERAL(1, 16, 18), // "swich_page_to_menu"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 28), // "slot_pushbutton_achievements"
QT_MOC_LITERAL(4, 65, 20), // "slot_pushbutton_back"
QT_MOC_LITERAL(5, 86, 25), // "slot_pushbutton_adventure"
QT_MOC_LITERAL(6, 112, 20), // "slot_pushButton_quit"
QT_MOC_LITERAL(7, 133, 22), // "slot_pushButton_cancel"
QT_MOC_LITERAL(8, 156, 20), // "slot_pushbutton_help"
QT_MOC_LITERAL(9, 177, 16), // "fade_on_fade_out"
QT_MOC_LITERAL(10, 194, 25) // "slot_pushbutton_main_menu"

    },
    "MainApplication\0swich_page_to_menu\0\0"
    "slot_pushbutton_achievements\0"
    "slot_pushbutton_back\0slot_pushbutton_adventure\0"
    "slot_pushButton_quit\0slot_pushButton_cancel\0"
    "slot_pushbutton_help\0fade_on_fade_out\0"
    "slot_pushbutton_main_menu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void MainApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainApplication *_t = static_cast<MainApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->swich_page_to_menu(); break;
        case 1: _t->slot_pushbutton_achievements(); break;
        case 2: _t->slot_pushbutton_back(); break;
        case 3: _t->slot_pushbutton_adventure(); break;
        case 4: _t->slot_pushButton_quit(); break;
        case 5: _t->slot_pushButton_cancel(); break;
        case 6: _t->slot_pushbutton_help(); break;
        case 7: _t->fade_on_fade_out(); break;
        case 8: _t->slot_pushbutton_main_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainApplication::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainApplication.data,
      qt_meta_data_MainApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainApplication.stringdata0))
        return static_cast<void*>(const_cast< MainApplication*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
