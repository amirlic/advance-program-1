//the bfs class is used to implement the bfs algorithm

#ifndef EX1_BFS_H
#define EX1_BFS_H

#include <queue>
#include <stack>
#include "Point.h"
#include "Road.h"

class Bfs {
    //const int n = 10, m = 10;
    Road map[10][10];
    //we declared a 10X10 2D array, but, our grid might not be 10X10 so we have
    //colMax and rowMax to bound the grid;
    int colMax, rowMax;

public:
    Bfs();

    Bfs(int n, int m);

    Point *getAllDrivers();

    queue<Road> route(Road start, Road end);

    //checks if curr is within the limits of our grid
    bool inArray(Road curr);

    virtual ~Bfs();

};


#endif //EX1_BFS_H
