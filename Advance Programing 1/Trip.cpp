//this class is used to describe the trip(where it passes) of a cab from a start point to an end point

#include <vector>
#include "Trip.h"

void Trip::updateMeterPassed() {
    this->MeterPassed += 1;
}

Point Trip::getStart() {
    return this->start;
}

Point Trip::getEnd() {
    return this->end;
}

Trip::Trip(int id, vector<Passenger> p, Point s, Point e, double tariff, double mp, stack<Road> bRoad) {
    this->ride_id = id;
    this->passengers = p;
    this->start = s;
    this->end = e;
    this->tariff = tariff;
    this->MeterPassed = mp;
    int i = 0;
    while (!bRoad.empty()) {
        this->bestRoad[i] = bRoad.top().getLocation();
        bRoad.pop;
    }
}

Trip::Trip() {

}

Trip::~Trip() {

}
