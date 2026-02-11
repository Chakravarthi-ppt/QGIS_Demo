/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[69];
    char stringdata0[1014];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "projectLoaded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "projectPath"
QT_MOC_LITERAL(4, 38, 10), // "layerAdded"
QT_MOC_LITERAL(5, 49, 9), // "layerName"
QT_MOC_LITERAL(6, 59, 11), // "layerLoaded"
QT_MOC_LITERAL(7, 71, 9), // "layerType"
QT_MOC_LITERAL(8, 81, 10), // "layerSaved"
QT_MOC_LITERAL(9, 92, 8), // "savePath"
QT_MOC_LITERAL(10, 101, 15), // "projectExported"
QT_MOC_LITERAL(11, 117, 9), // "directory"
QT_MOC_LITERAL(12, 127, 16), // "onLoadVectorFile"
QT_MOC_LITERAL(13, 144, 8), // "filePath"
QT_MOC_LITERAL(14, 153, 18), // "onCreateNewProject"
QT_MOC_LITERAL(15, 172, 13), // "onOpenProject"
QT_MOC_LITERAL(16, 186, 13), // "onSaveProject"
QT_MOC_LITERAL(17, 200, 15), // "onSaveAsProject"
QT_MOC_LITERAL(18, 216, 19), // "onOpenRecentProject"
QT_MOC_LITERAL(19, 236, 16), // "onAddVectorLayer"
QT_MOC_LITERAL(20, 253, 16), // "onAddRasterLayer"
QT_MOC_LITERAL(21, 270, 15), // "onAddImageLayer"
QT_MOC_LITERAL(22, 286, 15), // "onToggleEditing"
QT_MOC_LITERAL(23, 302, 8), // "onPanMap"
QT_MOC_LITERAL(24, 311, 8), // "onZoomIn"
QT_MOC_LITERAL(25, 320, 9), // "onZoomOut"
QT_MOC_LITERAL(26, 330, 23), // "onShowProcessingToolbox"
QT_MOC_LITERAL(27, 354, 19), // "onShowPythonConsole"
QT_MOC_LITERAL(28, 374, 21), // "onShowLayerProperties"
QT_MOC_LITERAL(29, 396, 19), // "onCreatePrintLayout"
QT_MOC_LITERAL(30, 416, 15), // "onShowBookmarks"
QT_MOC_LITERAL(31, 432, 16), // "addMarkerActions"
QT_MOC_LITERAL(32, 449, 22), // "removeCoordinateMarker"
QT_MOC_LITERAL(33, 472, 14), // "onScaleChanged"
QT_MOC_LITERAL(34, 487, 4), // "text"
QT_MOC_LITERAL(35, 492, 24), // "onCoordinatesToolToggled"
QT_MOC_LITERAL(36, 517, 7), // "enabled"
QT_MOC_LITERAL(37, 525, 24), // "onProjectionLabelClicked"
QT_MOC_LITERAL(38, 550, 22), // "showCRSSelectionDialog"
QT_MOC_LITERAL(39, 573, 12), // "onCRSChanged"
QT_MOC_LITERAL(40, 586, 3), // "crs"
QT_MOC_LITERAL(41, 590, 11), // "onLoadImage"
QT_MOC_LITERAL(42, 602, 12), // "onClearImage"
QT_MOC_LITERAL(43, 615, 10), // "onFitImage"
QT_MOC_LITERAL(44, 626, 12), // "onRotateLeft"
QT_MOC_LITERAL(45, 639, 13), // "onRotateRight"
QT_MOC_LITERAL(46, 653, 13), // "onZoomImageIn"
QT_MOC_LITERAL(47, 667, 14), // "onZoomImageOut"
QT_MOC_LITERAL(48, 682, 11), // "onResetZoom"
QT_MOC_LITERAL(49, 694, 20), // "onBrowseSaveLocation"
QT_MOC_LITERAL(50, 715, 20), // "onChangeSaveLocation"
QT_MOC_LITERAL(51, 736, 15), // "onExportProject"
QT_MOC_LITERAL(52, 752, 15), // "onImportProject"
QT_MOC_LITERAL(53, 768, 11), // "onSaveLayer"
QT_MOC_LITERAL(54, 780, 13), // "onSaveLayerAs"
QT_MOC_LITERAL(55, 794, 13), // "onExportToPdf"
QT_MOC_LITERAL(56, 808, 15), // "onExportToImage"
QT_MOC_LITERAL(57, 824, 15), // "onSaveAllLayers"
QT_MOC_LITERAL(58, 840, 18), // "onLayerItemClicked"
QT_MOC_LITERAL(59, 859, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(60, 876, 4), // "item"
QT_MOC_LITERAL(61, 881, 6), // "column"
QT_MOC_LITERAL(62, 888, 24), // "onLayerItemDoubleClicked"
QT_MOC_LITERAL(63, 913, 27), // "onLayerContextMenuRequested"
QT_MOC_LITERAL(64, 941, 3), // "pos"
QT_MOC_LITERAL(65, 945, 13), // "onRemoveLayer"
QT_MOC_LITERAL(66, 959, 20), // "onBrowserItemClicked"
QT_MOC_LITERAL(67, 980, 19), // "onSearchTextChanged"
QT_MOC_LITERAL(68, 1000, 13) // "onOpenGeoTIFF"

    },
    "MainWindow\0projectLoaded\0\0projectPath\0"
    "layerAdded\0layerName\0layerLoaded\0"
    "layerType\0layerSaved\0savePath\0"
    "projectExported\0directory\0onLoadVectorFile\0"
    "filePath\0onCreateNewProject\0onOpenProject\0"
    "onSaveProject\0onSaveAsProject\0"
    "onOpenRecentProject\0onAddVectorLayer\0"
    "onAddRasterLayer\0onAddImageLayer\0"
    "onToggleEditing\0onPanMap\0onZoomIn\0"
    "onZoomOut\0onShowProcessingToolbox\0"
    "onShowPythonConsole\0onShowLayerProperties\0"
    "onCreatePrintLayout\0onShowBookmarks\0"
    "addMarkerActions\0removeCoordinateMarker\0"
    "onScaleChanged\0text\0onCoordinatesToolToggled\0"
    "enabled\0onProjectionLabelClicked\0"
    "showCRSSelectionDialog\0onCRSChanged\0"
    "crs\0onLoadImage\0onClearImage\0onFitImage\0"
    "onRotateLeft\0onRotateRight\0onZoomImageIn\0"
    "onZoomImageOut\0onResetZoom\0"
    "onBrowseSaveLocation\0onChangeSaveLocation\0"
    "onExportProject\0onImportProject\0"
    "onSaveLayer\0onSaveLayerAs\0onExportToPdf\0"
    "onExportToImage\0onSaveAllLayers\0"
    "onLayerItemClicked\0QTreeWidgetItem*\0"
    "item\0column\0onLayerItemDoubleClicked\0"
    "onLayerContextMenuRequested\0pos\0"
    "onRemoveLayer\0onBrowserItemClicked\0"
    "onSearchTextChanged\0onOpenGeoTIFF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       4,    1,  287,    2, 0x06 /* Public */,
       6,    2,  290,    2, 0x06 /* Public */,
       8,    2,  295,    2, 0x06 /* Public */,
      10,    1,  300,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  303,    2, 0x08 /* Private */,
      14,    0,  306,    2, 0x08 /* Private */,
      15,    0,  307,    2, 0x08 /* Private */,
      16,    0,  308,    2, 0x08 /* Private */,
      17,    0,  309,    2, 0x08 /* Private */,
      18,    0,  310,    2, 0x08 /* Private */,
      19,    0,  311,    2, 0x08 /* Private */,
      20,    0,  312,    2, 0x08 /* Private */,
      21,    0,  313,    2, 0x08 /* Private */,
      22,    0,  314,    2, 0x08 /* Private */,
      23,    0,  315,    2, 0x08 /* Private */,
      24,    0,  316,    2, 0x08 /* Private */,
      25,    0,  317,    2, 0x08 /* Private */,
      26,    0,  318,    2, 0x08 /* Private */,
      27,    0,  319,    2, 0x08 /* Private */,
      28,    0,  320,    2, 0x08 /* Private */,
      29,    0,  321,    2, 0x08 /* Private */,
      30,    0,  322,    2, 0x08 /* Private */,
      31,    0,  323,    2, 0x08 /* Private */,
      32,    0,  324,    2, 0x08 /* Private */,
      33,    1,  325,    2, 0x08 /* Private */,
      35,    1,  328,    2, 0x08 /* Private */,
      37,    0,  331,    2, 0x08 /* Private */,
      38,    0,  332,    2, 0x08 /* Private */,
      39,    1,  333,    2, 0x08 /* Private */,
      41,    0,  336,    2, 0x08 /* Private */,
      42,    0,  337,    2, 0x08 /* Private */,
      43,    0,  338,    2, 0x08 /* Private */,
      44,    0,  339,    2, 0x08 /* Private */,
      45,    0,  340,    2, 0x08 /* Private */,
      46,    0,  341,    2, 0x08 /* Private */,
      47,    0,  342,    2, 0x08 /* Private */,
      48,    0,  343,    2, 0x08 /* Private */,
      49,    0,  344,    2, 0x08 /* Private */,
      50,    0,  345,    2, 0x08 /* Private */,
      51,    0,  346,    2, 0x08 /* Private */,
      52,    0,  347,    2, 0x08 /* Private */,
      53,    0,  348,    2, 0x08 /* Private */,
      54,    0,  349,    2, 0x08 /* Private */,
      55,    0,  350,    2, 0x08 /* Private */,
      56,    0,  351,    2, 0x08 /* Private */,
      57,    0,  352,    2, 0x08 /* Private */,
      58,    2,  353,    2, 0x08 /* Private */,
      62,    2,  358,    2, 0x08 /* Private */,
      63,    1,  363,    2, 0x08 /* Private */,
      65,    0,  366,    2, 0x08 /* Private */,
      66,    2,  367,    2, 0x08 /* Private */,
      67,    1,  372,    2, 0x08 /* Private */,
      68,    0,  375,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59, QMetaType::Int,   60,   61,
    QMetaType::Void, 0x80000000 | 59, QMetaType::Int,   60,   61,
    QMetaType::Void, QMetaType::QPoint,   64,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59, QMetaType::Int,   60,   61,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->layerAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layerLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->layerSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->projectExported((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onLoadVectorFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onCreateNewProject(); break;
        case 7: _t->onOpenProject(); break;
        case 8: _t->onSaveProject(); break;
        case 9: _t->onSaveAsProject(); break;
        case 10: _t->onOpenRecentProject(); break;
        case 11: _t->onAddVectorLayer(); break;
        case 12: _t->onAddRasterLayer(); break;
        case 13: _t->onAddImageLayer(); break;
        case 14: _t->onToggleEditing(); break;
        case 15: _t->onPanMap(); break;
        case 16: _t->onZoomIn(); break;
        case 17: _t->onZoomOut(); break;
        case 18: _t->onShowProcessingToolbox(); break;
        case 19: _t->onShowPythonConsole(); break;
        case 20: _t->onShowLayerProperties(); break;
        case 21: _t->onCreatePrintLayout(); break;
        case 22: _t->onShowBookmarks(); break;
        case 23: _t->addMarkerActions(); break;
        case 24: _t->removeCoordinateMarker(); break;
        case 25: _t->onScaleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->onCoordinatesToolToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->onProjectionLabelClicked(); break;
        case 28: _t->showCRSSelectionDialog(); break;
        case 29: _t->onCRSChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->onLoadImage(); break;
        case 31: _t->onClearImage(); break;
        case 32: _t->onFitImage(); break;
        case 33: _t->onRotateLeft(); break;
        case 34: _t->onRotateRight(); break;
        case 35: _t->onZoomImageIn(); break;
        case 36: _t->onZoomImageOut(); break;
        case 37: _t->onResetZoom(); break;
        case 38: _t->onBrowseSaveLocation(); break;
        case 39: _t->onChangeSaveLocation(); break;
        case 40: _t->onExportProject(); break;
        case 41: _t->onImportProject(); break;
        case 42: _t->onSaveLayer(); break;
        case 43: _t->onSaveLayerAs(); break;
        case 44: _t->onExportToPdf(); break;
        case 45: _t->onExportToImage(); break;
        case 46: _t->onSaveAllLayers(); break;
        case 47: _t->onLayerItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->onLayerItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->onLayerContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 50: _t->onRemoveLayer(); break;
        case 51: _t->onBrowserItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->onSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->onOpenGeoTIFF(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::projectLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::layerAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::layerLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::layerSaved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::projectExported)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::projectLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::layerAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::layerLoaded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::layerSaved(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::projectExported(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
