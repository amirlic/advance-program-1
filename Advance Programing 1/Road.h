//Road class is used to check for the node's father and at any given time whether we already have been to that node
//or not

#ifndef EX1_ROAD_H
#define EX1_ROAD_H

#include "Point.h"

class Road {
private:
    bool haveBeen;
    Point father;
    Point location;
public:
    Road() {
        this->haveBeen = false;
        this->location = Point(0, 0);
    }

    Road(Point location, Point father);

    Road(Point location);

    void setFather(Point father);

    void setHaveBeen(bool haveBeen);

    void setLocation(Point location);

    Point getFather();

    bool getHaveBeen();

    Point getLocation();

    bool operator==(Road &other);

    bool operator!=(Road &other);

    int getX();

    int getY();

    virtual ~Road();
};


#endif //EX1_ROAD_H
