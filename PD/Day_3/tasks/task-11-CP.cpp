#include<iostream>
using namespace std ;
main()
{
	int age , moved , currentHouse = 1 , averageDuration ;

	cout << "Enter the person's age : " ;
	cin >> age ;
 
	cout << "Enter the number of times they've moved : " ;
	cin >> moved ;

	averageDuration = age / ( moved + currentHouse ) ;

	cout << "Average number of years lived in the same house : " << averageDuration ;
}