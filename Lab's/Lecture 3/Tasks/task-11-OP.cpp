#include<iostream>
using namespace std ;
main()
{
	int population , n ;
	int month = 12 , threeDecade = 10 * 3;

	cout << "Enter the current world population : " ;
	cin >> population ;

	cout << "Enter the monthly birth rate ( number of births per months ) : " ;
	cin >> n ;

	int totalChildBirth = month * n * threeDecade ;
	int totalPopulation = totalChildBirth + population ;

	cout << "The population in three decades will be : " << totalPopulation ;
}