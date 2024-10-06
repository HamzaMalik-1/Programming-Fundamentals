#include<iostream>
using namespace std ;
main() 
{
	int number , sum =0 ;
	
	cout << "Enter a 4-digit number : " ;
	cin >> number ;

	sum =sum + number % 10 ;
	number = number / 10 ;
	
	sum =sum + number % 10 ;
	number = number / 10 ;

	sum =sum + number % 10 ;
	number = number / 10 ;

	sum =sum + number % 10 ;
	number = number / 10 ;

	cout << "Sums of individual digits : " << sum ;
}