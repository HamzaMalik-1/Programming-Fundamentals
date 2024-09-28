#include<iostream>

using namespace std ;

void checkCountry ( string countryName , float ticketPrice ) ;
void calculateFinalPrice ( float ticketPrice , float discount  ) ;

main ()
{
	while ( true ) 
	{
		string countryName ;
		float ticketPrice ;

		cout << "Enter the country's name : " ;
		cin >> countryName ;

		cout << "Enter the ticket price in dollars : $" ;
		cin >> ticketPrice ;

		checkCountry ( countryName , ticketPrice ) ;
	}
	

}

void checkCountry ( string countryName , float ticketPrice )
{
	if ( countryName == "Pakistan" )
	{
		calculateFinalPrice ( ticketPrice , 20 ) ;
		
	}

	if ( countryName == "Ireland" )
	{
		calculateFinalPrice ( ticketPrice , 10 ) ;
	}

	if ( countryName == "India" )
	{
		calculateFinalPrice ( ticketPrice , 5 ) ;
	}

	if ( countryName == "England" )
	{
		calculateFinalPrice ( ticketPrice , 10.0 / 3.0 ) ;
	}

	if ( countryName == "Canada" )
	{
		calculateFinalPrice ( ticketPrice ,  20.0 / 9.0 ) ;
	}
}

void calculateFinalPrice (float ticketPrice, float discount)
{
	float finalPrice = ticketPrice - ( ticketPrice /  discount );

	cout << "Final ticket price after discout : $" << finalPrice << endl << endl;
}