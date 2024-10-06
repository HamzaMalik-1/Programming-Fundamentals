#include<iostream>

using namespace std ;

void tpChecker ( int peopleNumber , int rollsNumber ) ;
void checkRequirement ( int rollEnoughForDays , int totalDays ) ;

main () 
{
	int peopleNumber , rollsNumber ;

	cout << "Number of people in the household : " ;
	cin >> peopleNumber ;

	cout << "Number of rolls of TP : " ;
	cin >> rollsNumber ;

	tpChecker ( peopleNumber , rollsNumber ) ;
	
}

void tpChecker ( int peopleNumber , int rollsNumber ) 
{
	int rollSheets = rollsNumber * 500 ;
	int sheetsUseByPeople = peopleNumber * 57 ;
	int rollEnoughForDays = rollSheets / sheetsUseByPeople ;
	int totalDays = 14 ;
	
	checkRequirement ( rollEnoughForDays , totalDays ) ;
}

void checkRequirement ( int rollEnoughForDays , int totalDays )
{
	if ( rollEnoughForDays >  totalDays ) 
	{
		cout << "Your TP will last " << rollEnoughForDays << " days, no need to panic!" << endl ;
	}

	if ( rollEnoughForDays <= totalDays ) 
	{
		cout << "Your TP only last " << rollEnoughForDays << " days, buy more!" << endl ; 
	}
}