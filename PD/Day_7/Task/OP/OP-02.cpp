#include <iostream>
using namespace std;

// Function Prototype
void printStructure(int number);
main()
{
    // Variable
    int number = 0;

    // Input
    cout << "Enter the desire number of row : ";
    cin >> number;

    // Function Call
    printStructure(number);
}
void printStructure(int number)
{
    // Variable
    int numberOfStar = 1;

    // loop 1
    for (int row = number; row >= 1; row = row - 1)
    {
    // inner loop 1
        for (int column = 1; column <= row; column = column + 1)
        {
            cout << " ";
        }

    // inner loop 2
        for (int column = 1; column <= numberOfStar; column = column + 1)
        {
            cout << "*";
        }
        numberOfStar = numberOfStar + 1;
        cout << endl;
    }

    // loop 2
    for (int row = 1; row <= number; row = row + 1)
    {
    // inner loop 1
        for (int column = 1; column <= row; column = column + 1)
        {

            cout << " ";
        }
        
        numberOfStar = numberOfStar - 1;

    // inner loop 2
        for (int column = numberOfStar; column >= 1; column = column - 1)
        {

            cout << "*";
        }
        cout << endl;
    }
}