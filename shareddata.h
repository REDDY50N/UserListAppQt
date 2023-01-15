#ifndef SHAREDDATA_H
#define SHAREDDATA_H

/*!
 *  Diese Klasse ist eine Art Datenbank.
 *  und wird als Singleton implementiert.
 */


class SharedData
{
// Singleton: Klasse mit privatem CTOR
private:
    SharedData();

// Singleton: öffentliche statische Methode,
// die eine geteilte Instanz zurückgibt
public:
    static SharedData* instance();
};

#endif // SHAREDDATA_H
