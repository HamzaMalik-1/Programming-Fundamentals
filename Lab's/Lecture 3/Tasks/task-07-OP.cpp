#include<iostream>
using namespace std;
main()
{
	float hour , second ;

	cout << "Enter the number of hours : " ;
	cin >> hour ;

	second = hour * 60 * 60 ;

	cout << hour << " is equivalent to " << second << " seconds." ;

}