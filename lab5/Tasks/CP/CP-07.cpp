#include <iostream>
using namespace std;

int reverse(int number);
bool IsSymmetrical(int number, int reverseNumber);


main()
{
    int number, reverseNumber;

    cout << "Enter three digit number : ";
    cin >> number;

    reverseNumber = reverse(number);
    if (IsSymmetrical(number, reverseNumber))
    {
        cout << "The number is  symmetrical";
    }
    if (!(IsSymmetrical(number, reverseNumber)))
    {
        cout << "The number is not symmetrical";
    }
}

int reverse(int number)
{
    int result = 0;
    while (true)
    {
        result = result + number % 10;

        result = result * 10;
        number = number / 10;
        if (number == 0)
        {
            result = result / 10;
            return result;
        }
    }
}

bool IsSymmetrical(int number, int reverseNumber)
{
    if (number == reverseNumber)
    {
        return true;
    }
    return false;
}