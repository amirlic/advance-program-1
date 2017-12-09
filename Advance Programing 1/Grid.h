//this class is used to to create and control the addition or deletion
//of object on the map

#ifndef EX2_GRID_H
#define EX2_GRID_H


#include "MapObj.h"
#include "Point.h"
#include "Map.h"

class Grid : Map {
private:
    MapObj map[10][10];
    Point obstacle[];
public:
    bool isEmpty(Point p);

    void addObj(MapObj o);

    void newMap(int x, int y);

    Grid(int sizeX, int sizeY, Point obstacle[]);

    Grid();

    virtual ~Grid();


};


#endif //EX2_GRID_H
