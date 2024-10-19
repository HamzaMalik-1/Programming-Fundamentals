#include <iostream>
using namespace std;

// Function Prototype
int frequencyChecker(int number, int digit);
main()
{
    // variable initialization
    int number = 0, digit = 0, frequency = 0;

    // inputs
    cout << "Enter a number : ";
    cin >> number;

    cout << "Enter a digit to check : ";
    cin >> digit;

    // Function Call
    frequency = frequencyChecker(number, digit);

    cout << "Frequency : " << frequency;
}

// Function Defination
int frequencyChecker(int number, int digit)
{
    int frequency = 0, lastDigit = 0;

    while (number > 0)
    {
        lastDigit = number % 10;
        number = number / 10;
        if (digit == lastDigit)
        {
            frequency = frequency + 1;
        }
    }
    return frequency;
}