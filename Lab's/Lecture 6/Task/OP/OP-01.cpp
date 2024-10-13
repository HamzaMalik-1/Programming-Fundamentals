#include<iostream>
using namespace std;
int num1GreaterthanNum2 ( int number1 ,int number2);
main ()
{
    int number1 , number2;

    cout << "Enter 1st Number : ";
    cin >> number1;
    
    cout << "Enter 2nd Number : ";
    cin >> number2;

    cout << num1GreaterthanNum2(number1 , number2);

}
int num1GreaterthanNum2 ( int number1 ,int number2)
{
    if ( number1 > number2)
    return 1;
    else
    return 0;
}