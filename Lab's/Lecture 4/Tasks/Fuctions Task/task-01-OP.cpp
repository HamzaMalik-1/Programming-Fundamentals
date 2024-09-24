#include<iostream> 
using namespace std ;

void requireFuel( float distance ) ;

main()
{
	float distance ;
	
	cout << "Enter the distance : " ;
	cin >> distance ;

	requireFuel( distance) ;

}

void requireFuel( float distance ) 
{
	float fuel = distance * 10 ;

	cout << "Fuel needed : " << fuel ;
}