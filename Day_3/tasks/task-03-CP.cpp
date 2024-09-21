#include<iostream>
using namespace std ;
main() 
{
	int initialVelocity , acceleration , time , finalVelocity ;

	cout << "Enter initial Velocity ( m/s ) : " ;
	cin >> initialVelocity ;

	cout << "Enter acceleration ( m/s^2 ) : " ;
	cin >> acceleration ;
	
	cout << "Enter time (s) : " ;
	cin >> time ;

	finalVelocity = initialVelocity + ( acceleration * time ) ;

	cout << "Final Velocity ( m/s ) : " << finalVelocity ; 
}