#include<iostream>
using namespace std;

// Function prototype to Print table of a number
void printTable(int number);

main()
{
    // Variable Declaration
    int number = 0;

    // Inputs
    cout << "Enter a number : ";
    cin >> number;

    // Outputs
    printTable(number);
}

// Function to Print table of a number
void printTable(int number)
{
    for (int i = 1; i <= 10; i=i+1)
    {
        cout << number << " x " << i << " = " << i* number << endl;
    }
    
}