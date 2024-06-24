/****************************************************************************
** Meta object code from reading C++ file 'registerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Client/registerdialog.h"
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
#error "The header file 'registerdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSregisterdialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSregisterdialogENDCLASS = QtMocHelpers::stringData(
    "registerdialog",
    "on_pushButton_register_clicked",
    "",
    "on_pushButton_back_clicked",
    "on_lineEdit_name_editingFinished",
    "on_lineEdit_name_textEdited",
    "arg1",
    "on_lineEdit_passwordone_editingFinished",
    "on_lineEdit_passwordone_textEdited",
    "on_lineEdit_passwordtwo_editingFinished",
    "on_lineEdit_passwordtwo_textEdited",
    "on_pushButton_3_clicked",
    "paintEvent",
    "QPaintEvent*",
    "event"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSregisterdialogENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[33];
    char stringdata5[28];
    char stringdata6[5];
    char stringdata7[40];
    char stringdata8[35];
    char stringdata9[40];
    char stringdata10[35];
    char stringdata11[24];
    char stringdata12[11];
    char stringdata13[13];
    char stringdata14[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSregisterdialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSregisterdialogENDCLASS_t qt_meta_stringdata_CLASSregisterdialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "registerdialog"
        QT_MOC_LITERAL(15, 30),  // "on_pushButton_register_clicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 26),  // "on_pushButton_back_clicked"
        QT_MOC_LITERAL(74, 32),  // "on_lineEdit_name_editingFinished"
        QT_MOC_LITERAL(107, 27),  // "on_lineEdit_name_textEdited"
        QT_MOC_LITERAL(135, 4),  // "arg1"
        QT_MOC_LITERAL(140, 39),  // "on_lineEdit_passwordone_editi..."
        QT_MOC_LITERAL(180, 34),  // "on_lineEdit_passwordone_textE..."
        QT_MOC_LITERAL(215, 39),  // "on_lineEdit_passwordtwo_editi..."
        QT_MOC_LITERAL(255, 34),  // "on_lineEdit_passwordtwo_textE..."
        QT_MOC_LITERAL(290, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(314, 10),  // "paintEvent"
        QT_MOC_LITERAL(325, 12),  // "QPaintEvent*"
        QT_MOC_LITERAL(338, 5)   // "event"
    },
    "registerdialog",
    "on_pushButton_register_clicked",
    "",
    "on_pushButton_back_clicked",
    "on_lineEdit_name_editingFinished",
    "on_lineEdit_name_textEdited",
    "arg1",
    "on_lineEdit_passwordone_editingFinished",
    "on_lineEdit_passwordone_textEdited",
    "on_lineEdit_passwordtwo_editingFinished",
    "on_lineEdit_passwordtwo_textEdited",
    "on_pushButton_3_clicked",
    "paintEvent",
    "QPaintEvent*",
    "event"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSregisterdialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    1,   77,    2, 0x08,    4 /* Private */,
       7,    0,   80,    2, 0x08,    6 /* Private */,
       8,    1,   81,    2, 0x08,    7 /* Private */,
       9,    0,   84,    2, 0x08,    9 /* Private */,
      10,    1,   85,    2, 0x08,   10 /* Private */,
      11,    0,   88,    2, 0x08,   12 /* Private */,
      12,    1,   89,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject registerdialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSregisterdialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSregisterdialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSregisterdialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<registerdialog, std::true_type>,
        // method 'on_pushButton_register_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_name_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_name_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEdit_passwordone_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_passwordone_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEdit_passwordtwo_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_passwordtwo_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paintEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>
    >,
    nullptr
} };

void registerdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<registerdialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_register_clicked(); break;
        case 1: _t->on_pushButton_back_clicked(); break;
        case 2: _t->on_lineEdit_name_editingFinished(); break;
        case 3: _t->on_lineEdit_name_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_lineEdit_passwordone_editingFinished(); break;
        case 5: _t->on_lineEdit_passwordone_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_lineEdit_passwordtwo_editingFinished(); break;
        case 7: _t->on_lineEdit_passwordtwo_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *registerdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *registerdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSregisterdialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int registerdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
