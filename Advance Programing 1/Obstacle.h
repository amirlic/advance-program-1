//this class indicates an obstacle on the map

#ifndef EX1_OBSTACLE_H
#define EX1_OBSTACLE_H


#include "Point.h"
#include "MapObj.h"

class Obstacle : public MapObj {
private:
    Point location;
public:
    Obstacle();

    Obstacle(Point location);

    virtual ~Obstacle();
};


#endif //EX1_OBSTACLE_H
