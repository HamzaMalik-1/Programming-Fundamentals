#include<iostream>
using namespace std ;
main () 
{
	float vegetablePrice , fruitPrice , vegetableTotalPrice , fruitTotalPrice , totalCoins , fixedRate = 1 / 1.94 , earning  ;
	int vegetableWeight , fruitWeight  ;

	cout << "Enter vegetable price per kilogram ( in coins ) : " ;
	cin >> vegetablePrice ;

	cout << "Enter fruit price per kilogram ( in coins ) : " ;
	cin >> fruitPrice ;

	cout << "Enter total kilograms of vegetables : " ;
	cin >> vegetableWeight ;
	
	
	cout << "Enter total kilograms of fruit : " ;
	cin >> fruitWeight ;

	vegetableTotalPrice = vegetablePrice * vegetableWeight ;
	fruitTotalPrice = fruitPrice * fruitWeight ;
	totalCoins = vegetableTotalPrice + fruitTotalPrice ;
	earning = totalCoins * fixedRate ;
	
	cout << "Total earning in Rupees ( Rps ) : " << earning ;
	
}