#include<iostream>
using namespace std;

// Function to count number of digit
int totalDigits(int number);

// Function to Create a number positive
int makePositive(int number);

main()
{   
    // Variable Declaration
    int number = 0 , totalNumbers = 0;

    // Input
    cout << "Enter a number : ";
    cin >> number;


    totalNumbers =  totalDigits(number);

    // Output
    cout << "Total number of digits : " << totalNumbers;
}

// Function to count number of digit
int totalDigits(int number)
{
    int count=1,positiveNumber=0;

    positiveNumber = makePositive(number);
    if (positiveNumber != 0)
    {
        count = 0 ;
    while (positiveNumber>0)
    {
        count = count + 1;
        positiveNumber = positiveNumber /10;
    }

    }
    return count;
}

// Function to Create a number positive
int makePositive(int number)
{
    int positiveNumber = number;
    if (positiveNumber < 0)
    {
        positiveNumber=-positiveNumber;
    }
    return positiveNumber;
}