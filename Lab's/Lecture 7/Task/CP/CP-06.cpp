#include <iostream>
#include <cmath>
using namespace std;

// Functions Prototype
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1 = 0, number2 = 0, gcd = 0, lcm = 0;
    // Variable initialization

    /// inputs
    cout << "Enter first number : ";
    cin >> number1;

    cout << "Enter second number : ";
    cin >> number2;

    // Function Calls
    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1, number2, gcd);

    cout << "GCD : " << gcd << endl;
    cout << "LCM : " << lcm;
}

// Functions Definations
int calculateGCD(int number1, int number2)
{
    int gcd = 0;
    for (int i = 1; i <= min(number1, number2); i = i + 1)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int gcd)
{
    // LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (number1 * number2) / gcd;
    return lcm;
}