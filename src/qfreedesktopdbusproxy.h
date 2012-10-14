/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p qfreedesktopdbusproxy -c QFreedesktopDBusProxy interfaces/org.freedesktop.DBus.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFREEDESKTOPDBUSPROXY_H_1335906469
#define QFREEDESKTOPDBUSPROXY_H_1335906469

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.DBus
 */
class QFreedesktopDBusProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.DBus"; }

public:
    QFreedesktopDBusProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFreedesktopDBusProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> AddMatch(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("AddMatch"), argumentList);
    }

    inline QDBusPendingReply<QString> GetId()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetId"), argumentList);
    }

    inline QDBusPendingReply<QString> GetNameOwner(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("GetNameOwner"), argumentList);
    }

    inline QDBusPendingReply<QString> Hello()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Hello"), argumentList);
    }

    inline QDBusPendingReply<QStringList> ListNames()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ListNames"), argumentList);
    }

    inline QDBusPendingReply<bool> NameHasOwner(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("NameHasOwner"), argumentList);
    }

    inline QDBusPendingReply<uint> ReleaseName(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("ReleaseName"), argumentList);
    }

    inline QDBusPendingReply<> RemoveMatch(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("RemoveMatch"), argumentList);
    }

    inline QDBusPendingReply<uint> RequestName(const QString &in0, uint in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("RequestName"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void NameOwnerChanged(const QString &in0, const QString &in1, const QString &in2);
};

#endif