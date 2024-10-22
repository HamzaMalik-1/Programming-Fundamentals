#include <iostream>
using namespace std;

// Function Prototype
bool isPrime(int number);

main()
{
    // Variable
    int number = 0;

    // Input
    cout << "Enter Number : ";
    cin >> number;

    // Contidions
    if (isPrime(number))
    {
        // Output
        cout << "1";
    }
    else
    {
        // Output
        cout << "0";
    }
}

// Function to check number is prime or not
bool isPrime(int number)
{
    for (int counter = 2; counter <= number / 2; counter = counter + 1)
    {
        if (number % counter == 0)
        {
            return false;
        }
    }
    return true;
}