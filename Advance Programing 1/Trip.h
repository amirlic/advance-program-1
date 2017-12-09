//this class is used to describe the trip(where it passes) of a cab from a start point to an end point

#ifndef EX2_TRIP_H
#define EX2_TRIP_H

#include <stack>
#include "list"
#include "Passenger.h"
#include "Point.h"
#include "Road.h"

using namespace std;

class Trip {
private:
    int ride_id;
    vector<Passenger> passengers;
    Point start;
    Point end;
    double tariff;
    double MeterPassed;
    Point bestRoad[];
public:
    void updateMeterPassed();

    Point getStart();

    Point getEnd();

    Trip(int id, vector<Passenger> p, Point s, Point e, double tariff, double
    mp, stack<Road> bRoad);

    Trip();

    virtual ~Trip();


};


#endif //EX2_TRIP_H
