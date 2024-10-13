#include <iostream>
using namespace std;
float findPayable(string day, string month, float price);
main()
{
    float price, payable;
    string day, month;

    cout << "Enter Purchase Day : ";
    cin >> day;

    cout << "Enter Purchase Month : ";
    cin >> month;

    cout << "Enter Purchase Amount : ";
    cin >> price;

    payable = findPayable(day, month, price);
    cout << "Payable Amount after discount: " << payable;
}

float findPayable(string day, string month, float price)
{
    float totalPrice = price;
    if (day == "Sunday")
    {
        if ((month == "October") || month == "March" || month == "August")
        {
            totalPrice = totalPrice - (totalPrice * 0.1);
        }
    }

    return totalPrice;
}