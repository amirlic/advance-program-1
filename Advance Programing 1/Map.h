//this class is used to store all of our cabs and obstacles

#ifndef EX2_MAP_H
#define EX2_MAP_H


#include "Point.h"
#include "MapObj.h"

class Map {
public:
    virtual bool isEmpty(Point p);
    virtual void addObj(MapObj o);

    virtual ~Map();
};


#endif //EX2_MAP_H
