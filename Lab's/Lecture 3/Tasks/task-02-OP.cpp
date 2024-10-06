#include<iostream>
using namespace std ;
main()
{
	float kilogram = 0.45 ;

	float pounds;
	cout << "Enter weight in pounds(lb) : " ;
	cin >> pounds ;

	float converter = pounds * kilogram ;
	
	cout << pounds << " lb in kilogram is "<< converter << " kg" << endl ;
}