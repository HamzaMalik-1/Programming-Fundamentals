#include <iostream>
using namespace std;

long double pyramidVolume(int lenght, int width, int height, string unit);
long double convert(long double value, string unit);
void display(long double result, string unit);
main()
{
    int length, width, height;
    string unit;

    cout << "Enter the length of pyramid ( in meters) : ";
    cin >> length;

    cout << "Enter the width of pyramid ( in meters) : ";
    cin >> width;

    cout << "Enter the height of pyramid ( in meters) : ";
    cin >> height;

    cout << "Enter the desired output unit (millimeters, centimeters, meters , kilometers) : ";
    cin >> unit;

    long double result = pyramidVolume(length, width, height, unit);
    display(result, unit);
}

long double pyramidVolume(int lenght, int width, int height, string unit)
{
    long double volume = (convert(lenght, unit) * convert(width, unit) * convert(height, unit)) / 3.0;
    return volume;
}

long double convert(long double value, string unit)
{
    if (unit == "millimeters")
    {
        value = value * 1000;
    }
    if (unit == "centimeters")
    {
        value = value * 100;
    }
    if (unit == "meters")
    {
        value = value * 1;
    }
    if (unit == "kilometers")
    {
        value = value / 1000;
    }
    return value;
}

void display(long double result, string unit)
{
    cout << "The volume of the pyramid is : " << result << " cubic " << unit;
}