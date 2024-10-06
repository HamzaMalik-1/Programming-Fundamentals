#include<iostream>
using namespace std;
main()
{
	int dollar;
	cout << "Enter amount in dollars : " ;
	cin >> dollar ;
	
	int rupee = dollar * 200 ;
	cout << dollar << " dollar(s) in rupee is Rs " << rupee << endl ;
}