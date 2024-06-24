/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Client/client.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSclientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSclientENDCLASS = QtMocHelpers::stringData(
    "client",
    "on_pushButton_login_clicked",
    "",
    "on_pushButton_register_clicked",
    "on_lineEdit_username_editingFinished",
    "on_lineEdit_username_textEdited",
    "arg1",
    "on_lineEdit_pwd_editingFinished",
    "on_lineEdit_pwd_textEdited",
    "paintEvent",
    "QPaintEvent*",
    "event",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSclientENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[31];
    char stringdata4[37];
    char stringdata5[32];
    char stringdata6[5];
    char stringdata7[32];
    char stringdata8[27];
    char stringdata9[11];
    char stringdata10[13];
    char stringdata11[6];
    char stringdata12[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSclientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSclientENDCLASS_t qt_meta_stringdata_CLASSclientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "client"
        QT_MOC_LITERAL(7, 27),  // "on_pushButton_login_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 30),  // "on_pushButton_register_clicked"
        QT_MOC_LITERAL(67, 36),  // "on_lineEdit_username_editingF..."
        QT_MOC_LITERAL(104, 31),  // "on_lineEdit_username_textEdited"
        QT_MOC_LITERAL(136, 4),  // "arg1"
        QT_MOC_LITERAL(141, 31),  // "on_lineEdit_pwd_editingFinished"
        QT_MOC_LITERAL(173, 26),  // "on_lineEdit_pwd_textEdited"
        QT_MOC_LITERAL(200, 10),  // "paintEvent"
        QT_MOC_LITERAL(211, 12),  // "QPaintEvent*"
        QT_MOC_LITERAL(224, 5),  // "event"
        QT_MOC_LITERAL(230, 21)   // "on_pushButton_clicked"
    },
    "client",
    "on_pushButton_login_clicked",
    "",
    "on_pushButton_register_clicked",
    "on_lineEdit_username_editingFinished",
    "on_lineEdit_username_textEdited",
    "arg1",
    "on_lineEdit_pwd_editingFinished",
    "on_lineEdit_pwd_textEdited",
    "paintEvent",
    "QPaintEvent*",
    "event",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSclientENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    1,   65,    2, 0x08,    4 /* Private */,
       7,    0,   68,    2, 0x08,    6 /* Private */,
       8,    1,   69,    2, 0x08,    7 /* Private */,
       9,    1,   72,    2, 0x08,    9 /* Private */,
      12,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject client::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSclientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSclientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSclientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<client, std::true_type>,
        // method 'on_pushButton_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_register_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_username_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_username_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEdit_pwd_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_pwd_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'paintEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_login_clicked(); break;
        case 1: _t->on_pushButton_register_clicked(); break;
        case 2: _t->on_lineEdit_username_editingFinished(); break;
        case 3: _t->on_lineEdit_username_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_lineEdit_pwd_editingFinished(); break;
        case 5: _t->on_lineEdit_pwd_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSclientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
