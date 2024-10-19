#include <iostream>
using namespace std;

// Functions Prototype
int calculateMoney(int age, int washingMachinePrice, int toyPrice);
int totalBirthdayMoney(int evenBirthday);
string displayResult(int netPrice, int washingMachinePrice);
main()
{
    // Variables
    int age = 0, washingMachinePrice, toyPrice, netPrice;

    cout << "Enter Lilly's age : ";
    cin >> age;

    cout << "Enter the price of the washing machine : ";
    cin >> washingMachinePrice;

    cout << "Enter the unit price of each toy : ";
    cin >> toyPrice;

    // Function call
    netPrice = calculateMoney(age, washingMachinePrice, toyPrice);

    // Output
    cout << displayResult(netPrice, washingMachinePrice);
}

// Functions Defination
int calculateMoney(int age, int washingMachinePrice, int toyPrice)
{
    int oddBirthday = 0, evenBirthday = 0, totalToys = 0, totalMoney = 0, netPrice = 0;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 != 0)
        {
            oddBirthday = oddBirthday + 1;
        }
        else
        {
            evenBirthday = evenBirthday + 1;
        }
    }

    totalToys = oddBirthday;
    totalMoney = totalBirthdayMoney(evenBirthday);
    netPrice = totalMoney + (totalToys * toyPrice);

    return netPrice;
}
int totalBirthdayMoney(int evenBirthday)
{
    int totalMoney = 0, moneyPerBirthday = 10, amountBrotherTook = 1;

    for (int i = 1; i <= evenBirthday; i = i + 1)
    {
        totalMoney = totalMoney + moneyPerBirthday - amountBrotherTook;
        moneyPerBirthday = moneyPerBirthday + 10;
    }

    return totalMoney;
}
string displayResult(int netPrice, int washingMachinePrice)
{
    if (netPrice > washingMachinePrice)
    {
        return "Yes!\n" + to_string(netPrice - washingMachinePrice);
    }
    else
    {
        return "No!\n" + to_string(washingMachinePrice - netPrice);
    }
}