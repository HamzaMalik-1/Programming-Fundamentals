#include <iostream>
using namespace std;
int parityAnalysis(int number);
int sum(int number);
main()
{
    int number;

    cout << "Enter a three Digit Number : ";
    cin >> number;
    if (number / 100 > 0)
    {
        cout << parityAnalysis(number);
    }
    else
    {
        cout << "You Enter wrong input ";
    }
}
int parityAnalysis(int number)
{
    int numberCopy = number;
    int sumOfindividual = sum(number);
    if ((numberCopy % 2 == 0) && (sumOfindividual % 2 == 0))
    {
        return 1;
    }
    else if ((numberCopy % 2 != 0) && (sumOfindividual % 2 != 0))
    {
        return 1;
    }
    return 0;
}
int sum(int number)
{
    int result = 0;
    while (number > 0)
    {
        result = result + (number % 10);
        number = number / 10;
    }
    return result;
}