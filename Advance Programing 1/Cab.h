//Class Cab is used as an interface for standard and luxury cabs

#ifndef EX2_CAB_H
#define EX2_CAB_H

#include <iostream>
#include "Point.h"
#include "Trip.h"
#include "Enum.h"
#include "MapObj.h"

class Cab : public MapObj {
private:
    int id;
    Color color;
    CarManuFactorer kind;
public:
    virtual int getCabId();

    virtual Point getLocation();

    virtual Trip getTrip();

    virtual double getTariff();

    virtual double getNumOfKm();

    virtual bool canMove();

    virtual void setTrip(Trip t);

    virtual void move(Point p[]);

    int getId();

    std::string getColor();

    std::string getKind();

    ~Cab();
};


#endif //EX2_CAB_H
