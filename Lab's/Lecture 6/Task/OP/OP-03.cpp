#include<iostream>
#include<string>
using namespace std; 
float input(char shape);
string calculatePerimeter(char shape , float value);
main()
{
    char shape;
    float value;
    cout << "Enter the shape ( s for square , c for circle , t for triangle , h for hexagon ) : ";
    cin >> shape;

    value = input(shape);
    cout << calculatePerimeter(shape , value);
}
float input(char shape)
{   
    float value;

    if( shape =='c')
    {
        cout << "Enter Radius : ";
        cin >> value;
    }
    else
    {
        cout <<"Enter side : ";
        cin >> value;
    }

    return value;

}
string calculatePerimeter(char shape , float value)
{
    float perimeter = value;
    if(shape == 's')
    {
        perimeter = 4.0 * value;
    }
    else if(shape == 'c')
    {
        perimeter = 6.28 * value;
    }
    else if(shape == 't')
    {
        perimeter = 3.0 * value;
    }
    else if(shape == 'h')
    {
        perimeter = 6.0 * value;
    }
        return "Ther perimeter is : " + to_string(perimeter);
}