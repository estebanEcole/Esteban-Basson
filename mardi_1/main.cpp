#include <iostream>
#include <sstream>
#include <Windows.h>
#include <vector>
#include "Point.h"

using namespace std;

int main()
{
    auto* firstP = new Point(6, 9);
    Point secondP;

    cout << "firstP = (" << firstP->GetX() << ", " << firstP->GetY() << ")" << endl;
    cout << "secondP = (" << secondP.GetX() << ", " << secondP.GetY() << ")" << endl;

    delete firstP;

    cout << "**** fin programme ***" << endl;

    return 0;
}