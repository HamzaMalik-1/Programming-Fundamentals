#include <iostream>
#include <cmath>

float root1, root2;

float findDeterminant(float a, float b, float c);
void checkDeterminant ( float a , float b , float c , float determinant);
void printResult( float a , float determinant) ;
using namespace std;

main()
{
	float a, b, c, determinant;
	cout << "Enter the value of a : ";
	cin >> a;

	cout << "Enter the value of b : ";
	cin >> b;

	cout << "Enter the value of c : ";
	cin >> c;

	determinant = findDeterminant(a, b, c);
	checkDeterminant( a,  b, c, determinant);
	printResult( a , determinant);

}

float findDeterminant(float a, float b, float c)
{
	float determinant = pow(b, 2) - (4 * a * c);
	return determinant;
}

void checkDeterminant(float a, float b, float c, float determinant)
{
	if (determinant > 0)
	{
		root1 = ((-1 * b) + sqrt(determinant)) / (2 * a);
		root2 = ((-1 * b) - sqrt(determinant)) / (2 * a);
	}
	if (determinant == 0)
	{
		root1 = (-1 * b) / (2 * a);
		root2 = root1;
	}
	if (determinant < 0)
	{
		root1 = (-1 * b) / (2 * a);
		root2 = root1;
	}
}

void printResult( float a , float determinant)
{
	if ( determinant > 0){
		cout << "Solution : x = " << root1 << " and x = " << root2 ;
	}
	if (determinant == 0)
	{
		cout << "Solution : x = " << root1 ;
	}
	
	if( determinant < 0 )
	{
		float temp = sqrt(-1 * determinant) / ( 2 * a);
		cout << temp << endl;
		cout << "Complex Solution : x = " << root1 << " + " << temp << "i and x = " << root2 << " - " << temp << "i" ;
	}
	
}