#include<iostream>
using namespace std ;

void add ( float number1 , float number2 ) ;
void sub ( float number1 , float number2 ) ;
void mul ( float ssnumber1 , float number2 ) ;
void division ( float number1 , float number2 ) ;

main () 
{
	float number1 , number2 ;
	char op ;

	cout << "Enter 1st number : " ;
	cin >> number1 ;

	cout << "Enter 2nd number : " ;
	cin >> number2 ;

	cout << "Enter an operator ( + , - , * , / ) : "  ;
	cin >> op ;

	if ( op == '+' ) 
	{
		add ( number1 , number2 ) ;
	}

	if ( op == '-' ) 
	{
		sub ( number1 , number2 ) ;
	}

	if ( op == '*' ) 
	{
		mul ( number1 , number2 ) ;
	}

	if ( op == '/' ) 
	{
		division ( number1 , number2 ) ;
	}

	
}

void add ( float number1 , float number2 )
{
	float result = number1 + number2 ;
	
	cout << "Addition : " << result ; 

}

void sub ( float number1 , float number2 )
{
	float result = number1 - number2 ;
	
	cout << "Subtraction : " << result ; 

}

void mul ( float number1 , float number2 )
{
	float result = number1 * number2 ;
	
	cout << "Multiplication: " << result ; 

}

void division ( float number1 , float number2 )
{
	float result = number1 / number2 ;
	
	cout << "Division : " << result ; 

}
