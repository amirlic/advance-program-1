//this is the luxury cab which charges twice as much an a standard cab

#ifndef EX2_LUXURY_H
#define EX2_LUXURY_H


#include "Point.h"
#include "Trip.h"
#include "Enum.h"
#include "Cab.h"

class Luxury : public Cab {
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
    Luxury(int id, int cabid, Trip t, Point
    location, Color color, CarManuFactorer kind, double
           tariff, double numofkm);

    Luxury();

    virtual ~Luxury();
};


#endif //EX2_LUXURY_H
