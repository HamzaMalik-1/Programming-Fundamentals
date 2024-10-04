#include <iostream>
using namespace std;

float taxCalculator(char type, float price);
float taxAmount(float price, float taxRate);
main()
{
    char type;
    float price, finalPrice;

    cout << "Enter the vehicle type code (M,E,S,V,T) : ";
    cin >> type;

    cout << "Enter the price of the vehicle : $";
    cin >> price;

    finalPrice = taxCalculator(type, price);
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << finalPrice;
}

float taxCalculator(char type, float price)
{
    float priceAfterTax;

    if (type == 'M')
    {
        priceAfterTax = price + taxAmount(price, 6);
    }
    if (type == 'E')
    {
        priceAfterTax = price + taxAmount(price, 8);
    }
    if (type == 'S')
    {
        priceAfterTax = price + taxAmount(price, 10);
    }
    if (type == 'V')
    {
        priceAfterTax = price + taxAmount(price, 12);
    }
    if (type == 'T')
    {
        priceAfterTax = price + taxAmount(price, 15);
    }
    return priceAfterTax;
}

float taxAmount(float price, float taxRate)
{
    float result = price * (taxRate / 100);
    cout << result << endl;
    return result;
}