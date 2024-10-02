#include <iostream>

using namespace std;

int individualSum(int number);
void OddishOrEvenish(int checkNumber);
main()
{
    int number, checkNumber;

    cout << "Enter five digit number : ";
    cin >> number;

    checkNumber = individualSum(number);
    OddishOrEvenish(checkNumber);
}

int individualSum(int number)
{
    int result = 0;
    while (true)
    {
        result = result + number % 10;
        number = number / 10;
        if (number == 0)
        {
            return result;
        }
    }
}

void OddishOrEvenish(int checkNumber)
{
    if( checkNumber % 2 == 0)
    {
        cout << "Evenish";
    }
    if( checkNumber % 2 != 0)
    {
        cout << "Oddish";
    }
}