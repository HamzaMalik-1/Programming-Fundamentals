#include<iostream>
using namespace std;
main()
{
	string name ;
	int rollNo ;
	char section ;
	float aggregate ;

	cout << "Enter Your Name : " ;
	cin >> name ;

	cout << "Enter your Aggregate : " ;
	cin >> aggregate ;

	cout << "Enter Your Section : " ;
	cin >> section ;
	
	cout << "Enter Your Roll No : " ;
	cin >> rollNo ;

	cout << "Name : "<< name << endl ;
	cout << "Aggregate : " << aggregate << endl ;
	cout << "Section : " << section << endl ;
	cout << "Roll No : " << rollNo << endl ;
}