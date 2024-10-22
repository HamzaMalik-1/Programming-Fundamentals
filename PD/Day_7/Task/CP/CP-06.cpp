#include <iostream>
using namespace std;

// Funtion Prototype
int primorial(int number);
bool isPrime(int number);

main()
{
    // Variable
    int number = 0, primorialNumber = 0;

    // Input
    cout << "Enter Number : ";
    cin >> number;

    // Function Call
    primorialNumber = primorial(number);

    // Output
    cout << primorialNumber;
}

// Function to find primorial
int primorial(int number)
{
    // Variable
    int count = 2;
    int primeNumber = 1, primorialNumber = 1;
    for (int counter = 1; counter <= number; counter = counter + 1)
    {
        while (true)
        {

            // Function Call
            if (isPrime(count))
            {
                primorialNumber = primorialNumber * count;
                count = count + 1;
                break;
            }
            count = count + 1;
        }
    }
    return primorialNumber;
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
