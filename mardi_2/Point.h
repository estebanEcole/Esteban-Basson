//
// Created by stbnb on 06/12/2022.
//

#ifndef MARDI_1_POINT_H
#define MARDI_1_POINT_H


#include <string>

class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y);
    Point();
    ~Point();
    int GetX() const { return this -> x; }
    int GetY() const{ return this -> y; }
};


#endif //MARDI_1_POINT_H
