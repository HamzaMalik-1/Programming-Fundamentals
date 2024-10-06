#include<iostream>
#include<cmath>

using namespace std; 

main() 
{
	float base , angleInDeg , angleInRad , height ;

	cout << "Enter the distance from the base of the tree ( in feet ) : " ;
	cin >> base ;

	cout << "Enter the angle of elevation ( in degrees ) : " ;
	cin >> angleInDeg ;

	angleInRad = angleInDeg / 57.2958 ;

	height = tan(angleInRad) *base ;
	
	cout << "Ther height of the tree is : " << height << " feet";	
}