//the bfs class is used to implement the bfs algorithm
#include <iostream>
#include "Bfs.h"
#include "queue"
#include "stack"

using namespace std;

Bfs::Bfs() {
    this->colMax = 10;
    this->rowMax = 10;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            this->map[i][j].setLocation(Point(i, j));
        }
    }
}

Bfs::Bfs(int n, int m) {
    this->colMax = n;
    this->rowMax = m;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            this->map[i][j].setLocation(Point(i, j));
        }
    }
}

Bfs::~Bfs() {

}

queue<Road> Bfs::route(Road start, Road end) {
    queue<Road> q = queue<Road>();
    q.push(start);
    //check if the start or end points are out of the grid's boundaries
    if (start.getX() > this->rowMax || start.getY() > this->colMax) {
        cout << "out of bounds" << std::endl;
        return q;
    }
    if (end.getX() > this->rowMax || end.getY() > this->colMax) {
        cout << "out of bounds" << std::endl;
        return q;
    }
    this->map[start.getX()][start.getY()].setHaveBeen(true);
    this->map[start.getX()][start.getY()].setFather(Point(-1, -1));
    Road prev = Road(Point(-1, -1));
    //the loop that implements the bfs algorithm
    while (!q.empty()) {
        Road current = q.front();
        q.pop();
        //if the current location is the end location than print the route
        if (current.getLocation().equals(end.getLocation())) {
            queue<Road> travel = queue<Road>();
            travel.push(this->map[current.getX()][current.getY()]);
            while (inArray(this->map[current.getX()][current.getY()].getFather())) {
                travel.push(
                        this->map[current.getFather().getX()][current.getFather().getY()])/*.getLocation().toSTRING()*/;
                current = this->map[current.getFather().getX()][current.getFather().getY()];
            }
            return travel;
        } else {
            //create all of the possible neighbors
            Road left = Road(Point(current.getX() - 1, current.getY()), current.getLocation());
            Road up = Road(Point(current.getX(), current.getY() + 1), current.getLocation());
            Road right = Road(Point(current.getX() + 1, current.getY()), current.getLocation());
            Road down = Road(Point(current.getX(), current.getY() - 1), current.getLocation());
            //check if the left neighbor is in range and that it hasn't been "walked" through already
            if (inArray(left) && this->map[left.getX()][left.getY()].getHaveBeen() == false) {

                q.push(left);
                this->map[left.getX()][left.getY()].setFather(current.getLocation());
                this->map[left.getX()][left.getY()].setHaveBeen(true);

            }
            //check if the upper neighbor is in range and that it hasn't been "walked" through already
            if (inArray(up) && up.getY() <= end.getY() && this->map[up.getX()][up.getY()].getHaveBeen() == false &&
                current.getY() <= end.getY()) {

                q.push(up);
                this->map[up.getX()][up.getY()].setFather(current.getLocation());
                this->map[up.getX()][up.getY()].setHaveBeen(true);
            }
            //check if the right neighbor is in range and that it hasn't been "walked" through already
            if (inArray(right) && right.getX() <= end.getX() &&
                this->map[right.getX()][right.getY()].getHaveBeen() == false
                && current.getX() <= end.getX()) {

                q.push(right);
                this->map[right.getX()][right.getY()].setFather(current.getLocation());
                this->map[right.getX()][right.getY()].setHaveBeen(true);
            }
            //check if the neighbor under is in range and that it hasn't been "walked" through already
            if (inArray(down) && this->map[down.getX()][down.getY()].getHaveBeen() == false) {

                q.push(down);
                this->map[down.getX()][down.getY()].setFather(current.getLocation());
                this->map[down.getX()][down.getY()].setHaveBeen(true);
            }
            this->map[current.getX()][current.getY()].setHaveBeen(true);
        }
    }


}

bool Bfs::inArray(Road curr) {
    if (curr.getX() >= 0 && curr.getX() <= this->rowMax) {
        if (curr.getY() >= 0 && curr.getY() <= this->colMax) {
            return true;
        }
    }
    return false;
}