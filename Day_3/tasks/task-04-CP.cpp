#include<iostream>
using namespace std ;
main()
{
	
	float  chances , imposter , player ;

	cout << "Enter Imposter Counts : " ;
	cin >> imposter ;

	cout << "Enter Player Counts : " ;
	cin >> player ;
	
	chances = 100 * ( imposter / player ) ;
	
	cout << "Chances of being an imposter : " << chances << "%" ;
}