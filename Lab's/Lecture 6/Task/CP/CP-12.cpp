#include <iostream>
using namespace std;
float totalIncome(string screening, int rows, int colums);
main()
{
    string screening;
    int rows, columns;
    cout << "Enter the screening type ( Premiere / Normal / Discout ) : ";
    cin >> screening;

    cout << "Enter the number of rows : ";
    cin >> rows;

    cout << "Enter the number of columns : ";
    cin >> columns;

    cout << totalIncome(screening, rows, columns);
}
float totalIncome(string screening, int rows, int colums)
{
    float price;
    if (screening == "Premiere")
    {
        price = rows * colums * 12.00;
    }
    if (screening == "Normal")
    {
        price = rows * colums * 7.50;
    }
    if (screening == "Discout")
    {
        price = rows * colums * 5.00;
    }

    return price;
}