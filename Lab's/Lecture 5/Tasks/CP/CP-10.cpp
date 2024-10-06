#include <iostream>

using namespace std;

void ones(int number);
void specialNumber(int number);
void tens(int number);

main()
{
	int number, onesPart, tensPart ;

	cout << "Enter a number ( 0 - 99 ) ";
	cin >> number;
	if (number > 10 && number < 20)
	{
		specialNumber(number);
		number = 0 ;
	}

	if (number / 10 != 0)
	{
		tens(number / 10);
	}

	number = number % 10;

	if (number / 10 == 0)
	{
		ones(number);
	}
}

void ones(int number)
{

	if (number == 1)
	{
		cout << "One";
	}
	if (number == 2)
	{
		cout << "Two";
	}
	if (number == 3)
	{
		cout << "Three";
	}
	if (number == 4)
	{
		cout << "Four";
	}
	if (number == 5)
	{
		cout << "Five";
	}
	if (number == 6)
	{
		cout << "Six";
	}
	if (number == 7)
	{
		cout << "Seven";
	}
	if (number == 8)
	{
		cout << "Eight";
	}
	if (number == 9)
	{
		cout << "Nine";
	}
}

void specialNumber(int number)
{

	if (number == 11)
	{
		cout << "Eleven";
	}
	if (number == 12)
	{
		cout << "Twelve";
	}
	if (number == 13)
	{
		cout << "Thirteen";
	}
	if (number == 14)
	{
		cout << "Fourteen";
	}
	if (number == 15)
	{
		cout << "Fifteen";
	}
	if (number == 16)
	{
		cout << "Sixteen";
	}
	if (number == 17)
	{
		cout << "Seventeen";
	}
	if (number == 18)
	{
		cout << "Eighteen";
	}
	if (number == 19)
	{
		cout << "Nineteen";
	}
}

void tens(int number)
{

	if (number == 2)
	{
		cout << "Twenty";
	}
	if (number == 3)
	{
		cout << "Thirty";
	}
	if (number == 4)
	{
		cout << "Forty";
	}
	if (number == 5)
	{
		cout << "Fifty";
	}
	if (number == 6)
	{
		cout << "Sixty";
	}
	if (number == 7)
	{
		cout << "Seventy";
	}
	if (number == 8)
	{
		cout << "Eighty";
	}
	if (number == 9)
	{
		cout << "Ninety";
	}
}