//this class holds all the drivers and cabs

#ifndef UNTITLED1_TAXICENTER_H
#define UNTITLED1_TAXICENTER_H


#include "Driver.h"
#include "Map.h"
#include "Bfs.h"

class TaxiCenter {
private:
    Driver drivers[];
    Cab cabs[];
    list<Trip> trips;
    Map map;
    Bfs bfs;
public:
    virtual ~TaxiCenter();

public:

    void addDriver();
    void addCab();
    void addTrip();
    Cab getCall(Trip t);
    int getNumOfDriver();
    int getNumofCabs();
    void connect(Cab c, Driver d);
    TaxiCenter(Map m, Driver d[], Cab c[]);
    TaxiCenter();
};


#endif //UNTITLED1_TAXICENTER_H
