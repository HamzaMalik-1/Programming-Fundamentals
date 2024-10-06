#include<iostream>

using namespace std ;

void pet(int holidays) ;
void tomCondition ( int timeDifference , int hour , int minutes ) ;

main () 
{
	int holidays ;

	cout << "Holidays : " ;
	cin >> holidays ;

	pet ( holidays ) ;

}

void pet(int holidays) 
{
	int workingDays = 365 - holidays ;
	int minutesPerWorkingDay = 63;
        int minutesPerHoliday = 127;
	int timeForGame = (workingDays * minutesPerWorkingDay) + ( holidays * minutesPerHoliday) ;
	int timeDifference = 30000 - timeForGame ;
	int hour = timeDifference / 60 ;
	int minutes = timeDifference % 60 ;
			
	tomCondition ( timeDifference , hour , minutes ) ;
	
}

void tomCondition ( int timeDifference , int hour , int minutes )
{
	
	if ( timeDifference > 0 ) 
	{
		cout << "Tom sleeps well" << endl ;		
	}

	if ( timeDifference < 0 ) 
	{
		hour = hour * -1 ;
		minutes = minutes * -1 ;
		cout << "Tom will run away" << endl ;		
		
	}
	cout << hour << " hours and " << minutes << " minutes for play" << endl ;
	

}