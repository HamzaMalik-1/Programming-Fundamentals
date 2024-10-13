#include <iostream>
using namespace std;
float lowestPrice(int distance, string day);
main()
{
    int distace;
    string day;
    float cheapestPrice;

    cout << "Enter the number of kilometers : ";
    cin >> distace;

    cout << "Enter the period of the day ( day / night ) : ";
    cin >> day;

    cheapestPrice = lowestPrice(distace, day);

    cout << "Lowest price for " << distace << " kilometers : " << cheapestPrice << " EUR";
}


float lowestPrice(int distance, string day)
{
    float price, chepestPrice;

    if (day == "day")
    {
        price = (distance * 0.79) + 0.70 ;
    }
    else
    {
        price = (distance * 0.90) + 0.70;
    }
    chepestPrice = price;

    if (distance >= 20)
    {
        price = (distance * 0.09);
    }

    if (chepestPrice > price)
    {
        chepestPrice = price;
    }

    if (distance >= 100)
    {
        price = (distance * 0.06);
    }

    if (chepestPrice > price)
    {
        chepestPrice = price;
    }

    return chepestPrice;
}