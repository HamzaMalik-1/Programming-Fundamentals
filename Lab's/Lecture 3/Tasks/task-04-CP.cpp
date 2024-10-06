#include<iostream>
using namespace std;
main () 
{	
	float current , charge , time ;

	cout << "Enter the Charge (Q) in coulombs : " ;
	cin >> charge ;

	cout << "Enter the time (t) in second : " ;
	cin >> time ;

	current = charge / time ;

	cout << "The current (I) is : " << current << " Amperes" ;
}