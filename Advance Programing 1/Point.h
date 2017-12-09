//Point class is used to describe the node's position

#ifndef EX1_POINT_H
#define EX1_POINT_H

//#include "MapObj.h"

using namespace std;

class Point {
    int xCoor;
    int yCoor;
public:
    int getX() const;

    int getY() const;

    void setPoint(int xCoor, int yCoor);

    Point(int xCoor, int yCoor);

    Point();

    void toSTRING();

    void increaseX();

    void increaseY();

    Point operator+(Point &other);

    bool equals(Point other);

    virtual ~Point();
};


#endif //EX1_POINT_H
