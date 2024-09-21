#include<iostream>
using namespace std ;
main() 
{
	string name ;
	float targetWeightLoss , requireDays ;
	
	cout << "Enter the Name of the Person : " ;
	cin >> name ;

	cout << "Enter the target weight loss in kilograms : " ;
	cin >> targetWeightLoss ;

	requireDays =  targetWeightLoss * 15 ;

	cout << name << " will need " << requireDays << " days to loss " << targetWeightLoss << " kg of weight by following the doctor's suggestion" ;
}