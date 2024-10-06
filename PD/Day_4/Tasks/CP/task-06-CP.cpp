#include<iostream>

using namespace std ;

void longestTime (int hour ,int minutes) ; 

main () 
{
	int minutes , hour ;

	cout << "Enter the number of hours : " ;
	cin >> hour ;

	cout << "Enter the number of minutes : " ;
	cin >> minutes ;	

	longestTime (hour , minutes) ;
}

void longestTime (int hour ,int minutes)
{
	int hourInSecond = hour * 60 * 60 ;
	int minutesInSecond = minutes * 60 ;

	if ( hourInSecond > minutesInSecond ) 
	{
		cout << hour << endl ;
	}
	if ( minutesInSecond > hourInSecond ) 
	{
		cout << minutes << endl ;
	}
}