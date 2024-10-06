#include<iostream>
using namespace std;
main()
{
	int year , days ;

	cout << "Enter your age in year : " ;
	cin >> year ;

	days = year * 365 ;
	
	cout << "Your age is approximately " << days << " days." ;
}