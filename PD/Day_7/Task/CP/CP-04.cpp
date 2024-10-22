#include <iostream>
using namespace std;

// Function Prototype
int triangle(int numberOfTriangle);

main()
{
    // Variable
    int numberOfTriangle = 0, dots;

    // Input
    cout << "Enter number of Triangle : ";
    cin >> numberOfTriangle;

    // Function Call
    dots = triangle(numberOfTriangle);

    // Output
    cout << "Dots in the Triangle : " << dots;
}

// Function to calculate Dots
int triangle(int numberOfTriangle)
{
    // Variable
    int dots = 0;

    // nested loops
    for (int row = 1; row <= numberOfTriangle; row = row + 1)
    {
        for (int column = 1; column <= row; column = column + 1)
        {
            dots = dots + 1;
        }
    }
    return dots;
}