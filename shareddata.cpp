#include "shareddata.h"

SharedData::SharedData()
{

}

//SharedData* SharedData::instance()
SharedData *SharedData::instance()
{
    // legt ein Objekt von SharedData an (findet nur 1x statt)
    static SharedData* model = new SharedData();
    // und gibt dieses Objekt jedesmal zurück
    return model;
}
