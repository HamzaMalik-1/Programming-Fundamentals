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
    // loop
    for (int rows = number; rows >= 1; rows = rows - 1)
    {
        for (int columns = 1; columns <= rows; columns = columns + 1)
        {
            // Output
            cout << "*";
        }
        cout << endl;
    }
}