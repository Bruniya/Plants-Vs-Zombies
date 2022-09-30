/****************************************************************************
** Meta object code from reading C++ file 'fightwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fightwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fightwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fightwindow_t {
    QByteArrayData data[14];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fightwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fightwindow_t qt_meta_stringdata_fightwindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "fightwindow"
QT_MOC_LITERAL(1, 12, 11), // "signal_back"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 30), // "slot_pushButton_card_sunflower"
QT_MOC_LITERAL(4, 56, 24), // "slot_pushButton_card_pea"
QT_MOC_LITERAL(5, 81, 24), // "slot_pushButton_card_nut"
QT_MOC_LITERAL(6, 106, 15), // "zombiescreation"
QT_MOC_LITERAL(7, 122, 13), // "scanning_move"
QT_MOC_LITERAL(8, 136, 9), // "time_over"
QT_MOC_LITERAL(9, 146, 12), // "createbullet"
QT_MOC_LITERAL(10, 159, 13), // "bullet_flying"
QT_MOC_LITERAL(11, 173, 14), // "recycle_bullet"
QT_MOC_LITERAL(12, 188, 17), // "produces_sunlight"
QT_MOC_LITERAL(13, 206, 14) // "zombie_recycle"

    },
    "fightwindow\0signal_back\0\0"
    "slot_pushButton_card_sunflower\0"
    "slot_pushButton_card_pea\0"
    "slot_pushButton_card_nut\0zombiescreation\0"
    "scanning_move\0time_over\0createbullet\0"
    "bullet_flying\0recycle_bullet\0"
    "produces_sunlight\0zombie_recycle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fightwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
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

void fightwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fightwindow *_t = static_cast<fightwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_back(); break;
        case 1: { int _r = _t->slot_pushButton_card_sunflower();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->slot_pushButton_card_pea();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->slot_pushButton_card_nut();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->zombiescreation(); break;
        case 5: _t->scanning_move(); break;
        case 6: _t->time_over(); break;
        case 7: _t->createbullet(); break;
        case 8: _t->bullet_flying(); break;
        case 9: _t->recycle_bullet(); break;
        case 10: _t->produces_sunlight(); break;
        case 11: _t->zombie_recycle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (fightwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&fightwindow::signal_back)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject fightwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fightwindow.data,
      qt_meta_data_fightwindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fightwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fightwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fightwindow.stringdata0))
        return static_cast<void*>(const_cast< fightwindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int fightwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void fightwindow::signal_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
