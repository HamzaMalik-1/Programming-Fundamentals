#include<iostream>
using namespace std ;
main() 
{
	int minutes , frames ;

	cout << "Number of Minutes : " ;
	cin >> minutes ;

	cout << "Frames per Second : " ;
	cin >> frames ;

	int seconds = minutes * 60 ;
	int totalFrames = frames * seconds ;

	cout << "Total Number of Frames : " << totalFrames ;
}