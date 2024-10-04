#include<iostream>
#include<cmath>

using namespace std ;

main ()
{
	float number1, number2 ;

	cout << "Enter 1st Number : " ;
	cin >> number1 ;

	cout << "Enter 2nd Number : " ;
	cin >> number2 ;

	cout << "The minimum of " << number1 << " and " << number2 << " is : " << min( number1 , number2 ) ;

}