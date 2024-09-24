#include<iostream>
using namespace std ;

void convert( float inches ) ; 

main() 
{
	float inches ;
	
	cout << "Enter the measurement in inches : " ;
	cin >> inches ;
	
	convert ( inches ) ; 

}

void convert( float inches )
{
	
	float feet = inches / 12  ;
	

	cout << "Equivalent in feet : " << feet ;
}