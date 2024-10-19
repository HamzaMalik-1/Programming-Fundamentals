#include<iostream>
using namespace std;

// Function Prototype to sum Digit
int digitSum(int number);
main ()
{
    int number=0 , sum =0;

    cout << "Enter a number : ";
    cin >> number;

    sum = digitSum(number);

    cout << "Sum of digits : " << sum;
}

// Function defination to sum Digit
int digitSum(int number)
{
    int sum=0;
    while (number>0)
    {
        sum = sum + (number % 10);
        number= number /10;
    }
    return sum;
    
}