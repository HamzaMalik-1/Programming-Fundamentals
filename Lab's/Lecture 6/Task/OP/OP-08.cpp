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
    cout << "Payable Amount after discount: " << payable ;
}
float findPayable(string day, string month, float price)
{
    float totalPrice = price;

    if ( day == "Sunday" &&( month == "March" || month == "August" || month == "October"))
    {
        totalPrice = totalPrice - (totalPrice * 0.1);
    }
    else if (day == "Monday" && ( month == "November" || month == "December"))
    {
        totalPrice = totalPrice - ( totalPrice * 0.05);
    }
    
    return totalPrice;
}