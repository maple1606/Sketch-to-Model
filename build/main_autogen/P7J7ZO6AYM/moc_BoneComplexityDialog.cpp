/****************************************************************************
** Meta object code from reading C++ file 'BoneComplexityDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../viewer/BoneComplexityDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoneComplexityDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoneComplexityDialog_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoneComplexityDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoneComplexityDialog_t qt_meta_stringdata_BoneComplexityDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "BoneComplexityDialog"
QT_MOC_LITERAL(1, 21, 15), // "skelTypeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 20), // "sliderBCValueChanged"
QT_MOC_LITERAL(5, 65, 5), // "value"
QT_MOC_LITERAL(6, 71, 23), // "sliderMergeValueChanged"
QT_MOC_LITERAL(7, 95, 23), // "sliderPruneValueChanged"
QT_MOC_LITERAL(8, 119, 26) // "sliderCollapseValueChanged"

    },
    "BoneComplexityDialog\0skelTypeChanged\0"
    "\0index\0sliderBCValueChanged\0value\0"
    "sliderMergeValueChanged\0sliderPruneValueChanged\0"
    "sliderCollapseValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoneComplexityDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void BoneComplexityDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoneComplexityDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->skelTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderBCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderMergeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sliderPruneValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sliderCollapseValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BoneComplexityDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BoneComplexityDialog.data,
    qt_meta_data_BoneComplexityDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoneComplexityDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoneComplexityDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoneComplexityDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BoneComplexityDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
