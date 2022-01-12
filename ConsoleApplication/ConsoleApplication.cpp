#include <iostream>
#include "OnOneLine.h"

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;
    cout << "x3 = ";
    cin >> x3;
    cout << "y1 = ";
    cin >> y1;
    cout << "y2 = ";
    cin >> y2;
    cout << "y3 = ";
    cin >> y3;

    bool isOnOneLine = on_one_line(x1, x2, x3, y1, y2, y3);
    cout << "The given points are " << (isOnOneLine ? "" : "not ") << "on one line" << endl;
}