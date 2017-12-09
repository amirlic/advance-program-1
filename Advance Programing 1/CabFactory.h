//The CabFactory is used to create the specific cab we require at any specific time

#ifndef UNTITLED1_CABFACTORY_H
#define UNTITLED1_CABFACTORY_H


#include "Cab.h"

class CabFactory {
public:
    Cab create(string s);
    CabFactory();

    virtual ~CabFactory();
};


#endif //UNTITLED1_CABFACTORY_H
