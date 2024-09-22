#include<iostream>
using namespace std ;
main() 
{
	int sizeOfFertilizer , costOfBag , area , costPerPound , costPerSquare ;
	
	cout << "Enter the size of fertilizer bag in pounds : " ;
	cin >> sizeOfFertilizer ;

	cout << "Enter cost of the bag : $" ;
	cin >> costOfBag ;
	
	cout << "Enter area in square feet that can be covered by the bag : " ;
	cin >> area ;

	costPerPound = costOfBag / sizeOfFertilizer ;
	costPerSquare = costOfBag / area ;

	cout << "Cost of fertilizer per pound : $" << costPerPound << endl ;
	cout << "Cost of fertilizer per square foot : $" << costPerSquare ;	
}