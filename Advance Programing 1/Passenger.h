//this class is used to indicate a cab's passenger

#ifndef EX2_PASSENGER_H
#define EX2_PASSENGER_H


#include "Point.h"

class Passenger {
private:
    Point source;
    Point destination;
public:
    Point getSource();

    Point getDestination();

    int giveStisfaction();

    Passenger(Point s, Point d);

    Passenger();

    virtual ~Passenger();

};


#endif //EX2_PASSENGER_H
