#include <iostream>
using namespace std;
bool areSameNumber(int number1, int number2, int number3);
main()
{
    int number1, number2, number3;

    cout << "Enter 1st Number : ";
    cin >> number1;

    cout << "Enter 2nd Number : ";
    cin >> number2;

    cout << "Enter 3rd Number : ";
    cin >> number3;

    if (areSameNumber(number1, number2, number3))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}
bool areSameNumber(int number1, int number2, int number3)
{
    if (number1 == number2 && number3)
    {
        return true;
    }
    return false;
}