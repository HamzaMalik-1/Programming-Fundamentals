#include<iostream>
using namespace std;
main()
{
	string teamName ;
	int wins , drawns , losses ;

	cout << "Enter the name of cricket team : " ;
	cin >> teamName ;

	cout << "Enter the number of wins : " ;
	cin >> wins ;

	cout << "Enter the number of drawns : " ;
	cin >> drawns ;

	cout << "Enter the number of losses : " ;
	cin >> losses ;

	int totalPoints = (wins * 3 ) + ( drawns * 1 ) + ( losses * 0 ) ;
	
	cout << teamName << " has obtained " << totalPoints << " in the Asia Cup Tournament " ;

}