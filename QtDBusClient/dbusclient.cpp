#include "dbusclient.h"

#include <QDebug>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusInterface>
#include <QDBusMessage>
#include <QDBusServiceWatcher>
#include <QDBusConnectionInterface>

const QString DBUS_SERVICE_SERVICE ="cmos.testdbus.service";
const QString DBUS_SERVICE_PATH ="/testdbus";
const QString DBUS_SERVICE_INTERFACE ="cmos.testdbus.service";


DBusClient::DBusClient(QObject *parent) :
    QObject(parent),
    m_sessionDBus(QDBusConnection::sessionBus())
{
    registerMyTypeDataTypes();

    QDBusConnection::sessionBus().connect(DBUS_SERVICE_SERVICE,
                                          DBUS_SERVICE_PATH,
                                          DBUS_SERVICE_INTERFACE,
                                          "notifyClientDBusChanged",
                                          this,SLOT(getNotifyClientDBusChanged(const QString &)));

    QDBusConnection::sessionBus().connect(DBUS_SERVICE_SERVICE,
                                          DBUS_SERVICE_PATH,
                                          DBUS_SERVICE_INTERFACE,
                                          "notifyDBusTypeChanged",
                                          this,SLOT(getNotifyDBusTypeChanged(const MyType &)));

    m_sessionDBus = QDBusConnection::connectToBus(QDBusConnection::SessionBus, "dbusclient");
}

void DBusClient::callService(QString text)
{
    qDebug() << " send DBus : " << text;
    QDBusInterface manager(DBUS_SERVICE_SERVICE,
                           DBUS_SERVICE_PATH,
                           DBUS_SERVICE_INTERFACE,
                           QDBusConnection::sessionBus());

    manager.call("serviceMethod",text);
}

void DBusClient::callTypeService(const QString &key, const QString &value)
{
    MyType mytype;
    mytype.key = key;
    mytype.value = value;

    QDBusInterface manager(DBUS_SERVICE_SERVICE,
                           DBUS_SERVICE_PATH,
                           DBUS_SERVICE_INTERFACE,
                           QDBusConnection::sessionBus());
                           //m_sessionDBus);

    QDBusPendingReply<bool> reply = manager.call("serviceTypeMethod", QVariant::fromValue<MyType>(mytype));
    reply.waitForFinished();

    if(!reply.isError()) {
        qDebug() << "--reply-:--" << reply;
    } else {
        qDebug() << reply.error();
    }
}

void DBusClient::getNotifyClientDBusChanged(const QString &text)
{
    qDebug() << " getNotifyClientDBusChanged : " << text;
    emit serviceDBusChanged(text);
}

void DBusClient::getNotifyDBusTypeChanged(const MyType &mytype)
{
    qDebug() << "getNotifyDBusTypeChanged : key is " << mytype.key << "  value is " << mytype.value;
}
