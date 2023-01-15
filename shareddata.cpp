#include "shareddata.h"

SharedData::SharedData()
{
    // Testdaten hinzufügen
    m_users.append( User("1", "Hunter", "Jackson", QDate(1988, 01, 11)) );
    m_users.append( User("2", "Bob", "Builder", QDate(1997, 12, 20)) );
    m_users.append( User("3", "Assi", "Toni", QDate(1975, 02, 16)) );
}

//SharedData *SharedData::instance() == selbe, nur andere Schreibweise
SharedData* SharedData::instance()
{
    // legt ein Objekt von SharedData an (findet nur 1x statt)
    static SharedData* model = new SharedData();
    // und gibt dieses Objekt jedesmal zurück
    return model;
}

// gibt Zeiger auf meine Nutzer zurück
QList<User>* SharedData::users()
{
    // gibt die Liste zurück
    return &m_users;
}
