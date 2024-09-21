#include<iostream>
using namespace std ;
main()
{
	int numberOfSquareMeters , widthOfWall , heightOfWall , totalWalls;
		
	cout << "Number of square meters you can paint : ";
	cin >> numberOfSquareMeters ;
	
	cout << "Width of single wall ( in meters ) : " ;
	cin >> widthOfWall ;

	cout << "Height of single wall ( in meters ) : " ;
	cin >> heightOfWall ;

	totalWalls = numberOfSquareMeters / ( widthOfWall * heightOfWall ) ;

	cout << "Number of walls you can paint : " << totalWalls ;
}