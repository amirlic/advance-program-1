//this class is used to indicate a cab or an obstacle on the map
#ifndef EX1_MAPOBJ_H
#define EX1_MAPOBJ_H


#include "Point.h"

class MapObj {
private:
    Point pos;
public:
    Point getPos();

    void setPos(Point p);

    virtual ~MapObj();
};


#endif //EX1_MAPOBJ_H