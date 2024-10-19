#include <iostream>
using namespace std;

// Function Prototype
int calculatePrice(int money, int year);
int input(string data);
string displayOutput(int remainingMoney);
main()
{
    // variabels
    int money, year, remainingMoney;

    // inputs
    money = input("Money");
    year = input("Year");

    // Calucations by using function
    remainingMoney = calculatePrice(money, year);

    // Output
    cout << displayOutput(remainingMoney);
}

// Function definations
int calculatePrice(int money, int year)
{
    int totalSpent = 0, reaminingMoney = 0, age = 18;
    for (int startingYear = 1800; startingYear <= year; startingYear = startingYear + 1)
    {
        if (startingYear % 2 == 0)
        {
            totalSpent = totalSpent + 12000;
        }
        // When startingYear % 2 != 0
        else if (startingYear % 2 != 0)
        {
            totalSpent = totalSpent + (12000 + (50 * age));
        }

        age = age + 1;
    }
    reaminingMoney = money - totalSpent;
    return reaminingMoney;
}

int input(string data)
{
    int value;

    cout << "Enter " << data << " :";
    cin >> value;

    return value;
}
string displayOutput(int remainingMoney)
{
    if (remainingMoney >= 0)
    {
        return "Yes! He will live a carefree life and will have " + to_string(remainingMoney) + " dollars left.";
    }
    // When remainingMoney < 0
    else
    {
        return "He will need " + to_string(-remainingMoney) + " dollars to survive.";
    }
}