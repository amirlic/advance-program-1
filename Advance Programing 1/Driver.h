//Class creates Driver Object who drives the cab.

#ifndef EX2_DRIVER_H
#define EX2_DRIVER_H


#include "Cab.h"
#include "Enum.h"

class Driver {
private:
    int id;
    int age;
    Cab cab;
    MaritalStatus status;
    int satisfation;
    int experience;
public:
    void setCab(const Cab &cab);

    Cab getCab();

    void setSatisfation(int satisfation);

    void printLocation();

    Driver(int id, int age, int sat, int exp, Cab c, MaritalStatus status);

    Driver();

    virtual ~Driver();
};


#endif //EX2_DRIVER_H
