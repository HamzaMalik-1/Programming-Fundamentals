#include<iostream>
using namespace std ;

main () 
{
	int totalAmount , payable ;
	string day ;

	while ( true ) 
	{
		cout << "Enter day : " ;
		cin >> day ;

		cout << "Enter Total Amount : " ;
		cin >> totalAmount ;

		if ( day == "Sunday" )
		{
			payable = totalAmount - ( totalAmount / 10 ) ;
		}
		if ( day != "Sunday" ) 
		{
			payable = totalAmount - ( totalAmount / 20 ) ;
		}
		cout << "Payable Amount : " << payable << endl ;

	}
}