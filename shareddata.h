#ifndef SHAREDDATA_H
#define SHAREDDATA_H

/*!
 *  Diese Klasse ist eine Art Datenbank.
 *  und wird als Singleton implementiert.
 */

#include <QList>
#include "user.h"

class SharedData
{
// Singleton: Klasse mit privatem CTOR
private:
    SharedData();

// Singleton: öffentliche statische Methode,
// die eine geteilte Instanz zurückgibt
public:
    static SharedData* instance();


public:
    // öffentlichen Getter, der die private Liste unten zurückgibt
    QList<User>* users();

private:
    // privates Attribut mit einer Liste von Nutzern
    QList<User> m_users;
};

#endif // SHAREDDATA_H
