//this class is used to describe a standard cab

#ifndef EX2_STANDARD_H
#define EX2_STANDARD_H


#include "Cab.h"
#include "Enum.h"

class Standard : public Cab {
private:
    int cabId;
    int id;
    Point location;
    Trip trip;
    Color color;
    CarManuFactorer kind;
    double tariff;
    double numberOfKm;
public:
    Standard(int id, int cabid, Trip t, Point l, Color color, CarManuFactorer kind, double tariff,
             double numofkm);

    Standard();

    ~Standard();

};


#endif //EX2_STANDARD_H
