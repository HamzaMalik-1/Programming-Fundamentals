#include<iostream>
#include<string>

using namespace std ;

string timeTravel ( int hour , int min) ;
main()
{
    int hour , min ;

    cout << "Enter hour (0 - 23) : ";
    cin >> hour ; 

    cout << "Enter minutes ( 0 - 59 ) : ";
    cin >> min ;

    string ans = timeTravel( hour , min );
    cout << ans ;

}

string timeTravel ( int hour , int min)
{
    int totalTime = (hour * 60) + min + 15 ;
    int newHour = totalTime / 60 ;
    int newMin = totalTime % 60 ;
    string hourInString = to_string(newHour);
    string minInString = to_string(newMin);
    string result = hourInString + ":" + minInString;
    return result ;
}