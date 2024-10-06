#include<iostream>
using namespace std ;
main ()
{
	float megaBytes , bits;

	cout << "Enter the size in megaBytes (MB) : " ;
	cin >> megaBytes ;

	bits = megaBytes * 1024 * 1024 * 8 ;

	cout << megaBytes << " MB is equivalent to " << bits << " bits." ;

}