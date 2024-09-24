#include<iostream>
using namespace std ;

void add ( int number1 , int number2 ) ;

main ()
{
	int number1 , number2 ;
	char op ;

	cout << "Enter Number1 : " ;
	cin >> number1 ;

	cout << "Enter Number2 : " ;
	cin >> number2 ;

	cout << "Enter Operator ( + , - , / ,* ) : " ;
	cin >> op ;

	if ( op = '+' ) {
		add ( number1 , number2 ) ;
	}
}

void add ( int number1 , int number2 )
{
	int sum ;
	
	sum = number1 + number2 ;
	cout << "Sum : " << sum ;
	
}