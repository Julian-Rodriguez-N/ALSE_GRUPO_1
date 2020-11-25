/****************************************************************************
** Meta object code from reading C++ file 'meteoeci_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../meteoeci_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meteoeci_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeteoECI_GUI_t {
    QByteArrayData data[8];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeteoECI_GUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeteoECI_GUI_t qt_meta_stringdata_MeteoECI_GUI = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MeteoECI_GUI"
QT_MOC_LITERAL(1, 13, 12), // "leerSensores"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 51, 13), // "registro_slot"
QT_MOC_LITERAL(5, 65, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(6, 90, 14), // "datos_registro"
QT_MOC_LITERAL(7, 105, 21) // "on_pushButton_clicked"

    },
    "MeteoECI_GUI\0leerSensores\0\0"
    "on_pushButton_2_clicked\0registro_slot\0"
    "std::vector<std::string>\0datos_registro\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeteoECI_GUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void MeteoECI_GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeteoECI_GUI *_t = static_cast<MeteoECI_GUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->leerSensores(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->registro_slot((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MeteoECI_GUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MeteoECI_GUI.data,
      qt_meta_data_MeteoECI_GUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MeteoECI_GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeteoECI_GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeteoECI_GUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MeteoECI_GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
