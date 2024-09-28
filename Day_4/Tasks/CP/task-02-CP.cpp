#include<iostream>

using namespace std ;

void reverse ( string truthValue ) ;

main () 
{
	string truthValue ;
	
	cout << "Enter \'true\' or \'false\' : " ;
	cin >> truthValue ;

	reverse ( truthValue ) ;
}

void reverse ( string truthValue )
{
	if ( truthValue == "true" ) 
	{
		cout << "false" << endl ;
	}
	if ( truthValue == "false" ) 
	{
		cout << "true" << endl ;
	}
}