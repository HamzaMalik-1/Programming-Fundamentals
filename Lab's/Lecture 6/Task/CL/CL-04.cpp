#include<iostream>
using namespace std;
int findGreatest(int number1 , int number2 , int number3);
main()
{
    int number1 , number2 , number3 , maximum ;

    cout << "Enter the first number : ";
    cin >> number1 ;
    
    cout << "Enter the second number : ";
    cin >> number2 ;
   
    cout << "Enter the third number : ";
    cin >> number3 ;

    maximum = findGreatest(number1 , number2 , number3);

    cout << "Ther greatest number among " << number1 << ",  " << number2 << ", and " << number3 << " is : " << maximum ;



}
int findGreatest(int number1 , int number2 , int number3)
{
    if ( (number1 > number2) && (number1> number3))
    {
        return number1 ;
    }
    
   else if ( (number2 > number1) && (number2 > number3))
    {
        return number2 ;
    }
   else 
    {
        return number3 ;
    }

}