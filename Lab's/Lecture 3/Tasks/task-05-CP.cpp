#include<iostream>
using namespace std ;
main ()
{
	string name;
	 
	float aggregate , matricMarks , interMarks , ecatMarks ;

	cout << "Enter student name : " ;
	cin >> name ;

	cout << "Enter matirculation marks ( out of 1100 ) : " ;
	cin >> matricMarks ;

	cout << "Enter intermediate marks ( out of 550 ) : " ;
	cin >> interMarks ;

	cout << "Enter Ecat Marks ( out of 400 ) : " ;
	cin >> ecatMarks ;

	float matricPercentage = matricMarks / 1100 * 100 ;
	float interPercentage = interMarks / 550 * 100 ;
	float ecatPercentage = ecatMarks / 400 * 100 ;

	aggregate = (matricPercentage * 0.1 ) + (interPercentage * 0.4) + (ecatPercentage * 0.5 ) ;
	
	cout << "Aggregate score for " << name << " in Uet is : " << aggregate << "%";	
}