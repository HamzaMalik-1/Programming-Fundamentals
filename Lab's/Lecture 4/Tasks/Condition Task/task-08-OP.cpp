#include<iostream>
using namespace std ;

void calculate ( float amount , string day ) ;

main () 
{
	float amount ;
	string day ;

	cout << "Enter the day of purchase : " ;
	cin >> day ;

	cout << "Enter the total amount of purchase : $" ;
	cin >> amount ;

	calculate ( amount , day ) ;
}


void calculate ( float amount , string day )
{
	float totalPrice ;
	if ( day == "Sunday" ) 
	{
		totalPrice = amount - ( amount / 10 ) ;
		cout << "Payable Amount : $" << totalPrice ;
	}
	if ( day != "Sunday" )
	{
		totalPrice = amount ;
		cout << "Payable Amount : $" << totalPrice ;	
	}
}

