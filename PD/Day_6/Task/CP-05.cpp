#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
void displayResult(float totalPrice);

main()
{
    // Declaration
    string fruit, dayOfWeek;
    double quantity;
    float totalPrice;

    // Inputs
    cout << "Enter the fruit name : ";
    cin >> fruit;

    cout << "Enter the day of the week (e.g , Monday , Sunday) : ";
    cin >> dayOfWeek;

    cout << "Enter the quantity : ";
    cin >> quantity;

    totalPrice = calculateFruitPrice(fruit, dayOfWeek, quantity);

    // Output
    displayResult(totalPrice);
}

// Function to calculate Fruit Price
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float totalPrice;

    if (dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            totalPrice = quantity * 2.70;
        }

        else if (fruit == "apple")
        {
            totalPrice = quantity * 1.25;
        }

        else if (fruit == "orange")
        {
            totalPrice = quantity * 0.90;
        }

        else if (fruit == "grapefruit")
        {
            totalPrice = quantity * 1.60;
        }

        else if (fruit == "kiwi")
        {
            totalPrice = quantity * 3.00;
        }

        else if (fruit == "pineapple")
        {
            totalPrice = quantity * 5.60;
        }

        else if (fruit == "grapes")
        {
            totalPrice = quantity * 4.20;
        }
    }

    else if (dayOfWeek != "Sunday")
    {
        if (fruit == "banana")
        {
            totalPrice = quantity * 2.50;
        }

        else if (fruit == "apple")
        {
            totalPrice = quantity * 1.20;
        }

        else if (fruit == "orange")
        {
            totalPrice = quantity * 0.85;
        }

        else if (fruit == "grapefruit")
        {
            totalPrice = quantity * 1.45;
        }

        else if (fruit == "kiwi")
        {
            totalPrice = quantity * 2.70;
        }

        else if (fruit == "pineapple")
        {
            totalPrice = quantity * 5.50;
        }

        else if (fruit == "grapes")
        {
            totalPrice = quantity * 3.85;
        }
    }
    // Invalid day of week or Invalid name of fruit
    else
    {
        totalPrice = 0.0;
    }

    return totalPrice;
}

// Function to Display output
void displayResult(float totalPrice)
{
    if (totalPrice != 0.0)
    {
        cout << fixed << setprecision(2) << totalPrice;
    }
    // When having an invalid input or totalPrice = 0.0
    else
    {
        cout << "error";
    }
}