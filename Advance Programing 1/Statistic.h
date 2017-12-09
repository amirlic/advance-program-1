//this class provides statistics on drivers and their location

#ifndef Ex1_STATISTIC_H
#define Ex1_STATISTIC_H


#include <map>
#include "Driver.h"
#include "Map.h"

class Statistic {
private:
    map<Driver, Point> getDriverLocations(list <Driver>);

public:
    virtual ~Statistic();
};


#endif //Ex1_STATISTIC_H
