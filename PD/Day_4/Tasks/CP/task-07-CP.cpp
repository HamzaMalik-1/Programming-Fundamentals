#include<iostream>

using namespace std ;

void flowerShop(int redRose, int whiteRose, int tulip) ; 

main () 
{
	int redRose , whiteRose , tulip ;

	cout << "Red Rose : " ;
	cin >> redRose ;

	cout << "White Rose : " ;
	cin >> whiteRose ;

	cout << "Tulip Rose : " ;
	cin >> tulip ;

	flowerShop( redRose, whiteRose, tulip ) ;
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
	float totalPrice = ( redRose * 2.0 ) + ( whiteRose * 4.10 ) + ( tulip * 2.50 ) ; 
 	float payable ;
	
	
	if ( totalPrice > 200 )
	{
		float discout = 100.0 / 20.0 ;
		payable = totalPrice - ( totalPrice / discout ) ;
	}
	
	if ( totalPrice <= 200 )
	{
		payable = totalPrice ;	
	}

	cout << "Original Price : " << totalPrice << endl ;
	cout << "Price after Discount : " << payable << endl ;
}