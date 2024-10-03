#include <iostream>

using namespace std;

int individualSum(int number);
string OddishOrEvenish(int checkNumber);
main()
{
    int number , sum;
    string checkNumber;

    cout << "Enter five digit number : ";
    cin >> number;

    sum = individualSum(number);
   checkNumber= OddishOrEvenish(sum);

   cout<<checkNumber;
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

string OddishOrEvenish(int sum)
{
    if (sum % 2 == 0)
    {
        return "Evenish";
    }
    if (sum % 2 != 0)
    {
        return "Oddish";
    }
}