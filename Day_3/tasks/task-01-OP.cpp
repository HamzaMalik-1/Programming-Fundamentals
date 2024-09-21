#include<iostream>
using namespace std;
main() 
{
	int sides , totalSumOfInternalAngles ;

	cout << "Enter the number of sides of polygon : " ;
	cin >> sides ;

	totalSumOfInternalAngles = ( sides - 2 ) * 180 ;

	cout << "The sum of internal angles of a " << sides << "-sided polygon is : " << totalSumOfInternalAngles << " degrees" ;
}