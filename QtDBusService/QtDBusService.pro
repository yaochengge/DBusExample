TEMPLATE = app

QT += qml quick dbus

SOURCES += main.cpp \
    dbusservice.cpp \
    dbustypes.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    dbusservice.h \
    dbustypes.h
