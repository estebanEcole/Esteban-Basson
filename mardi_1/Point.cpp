//
// Created by stbnb on 06/12/2022.
//
#include <iostream>
#include <sstream>
#include <Windows.h>
#include <vector>
#include <string>
#include "Point.h"

using namespace std;

Point::Point(int x, int y) {
    cout << "construct : " << this << endl;
    this -> x = x;
    this -> y = y;
}
Point::Point() {
    cout << "construct : " << this << endl;
    x = 0;
    y = 0;
}

Point::~Point() {

    cout << "delete : " << this << endl;

}

