TEMPLATE = app

QT += qml quick dbus

CONFIG += link_pkgconfig
packagesExist(qdeclarative5-boostable) {
    message("Building with qdeclarative5-boostable support.")
    DEFINES += HAS_BOOSTER
    PKGCONFIG += qdeclarative5-boostable
} else {
    warning("qdeclarative5-boostable not available; startup will be slower.")
}

SOURCES += main.cpp \
    dbusclient.cpp \
    dbuswatcher.cpp \
    dbustypes.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    dbusclient.h \
    dbuswatcher.h \
    dbustypes.h
