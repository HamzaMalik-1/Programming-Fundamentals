#include <iostream>
using namespace std;

// Function Prototype
string checkPointPosition(int h, int x, int y);

main()
{
    // Variable Declaration
    int h, x, y;

    // Inputs
    cout << "Enter height : ";
    cin >> h;

    cout << "Enter x coordinate : ";
    cin >> x;

    cout << "Enter y coordinate : ";
    cin >> y;

    // Output
    cout << checkPointPosition(h, x, y);
}

// Function to check Position of the point
string checkPointPosition(int h, int x, int y)
{
    // to check point is on border or not
    if ((x % h == 0 || y % h == 0) && ((x >= h && x <= (h + h) && y >= 0 && y <= (4 * h)) || (x >= (h + h) && x <= (h + h + h) && y>=0 && y<=h)))
    {
        return "Border";
    }

    // to check point is inside or not
    else if ((x > 0 || x < h || y > 0 || y < h) && (x >= h && x <= (h + h) && y < (4 * h)))
    {
        return "Inside";
    }

    // point is  outside
    return "Outside";
}