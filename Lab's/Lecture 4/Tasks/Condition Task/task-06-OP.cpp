#include<iostream>
using namespace std ;

void check ( int score ) ;

main () 
{
	int score ;
	
	cout << "Enter your score : " ;
	cin >> score ;

	check ( score ) ;
}

void check ( int score ) 
{
	if ( score > 50 )
	{
		cout << "Pass" << endl ;
	}
	if ( score <= 50 )
	{
		cout << "Fail" << endl ;
	}
	
}