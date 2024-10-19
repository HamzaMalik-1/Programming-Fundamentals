#include <iostream>
using namespace std;

void generateFibonacci(int length);
main()
{
    int lenght;

    cout << "Enter the lenght of the Fibonacci series : ";
    cin >> lenght;

    generateFibonacci(lenght);
}
void generateFibonacci(int length)
{
    int number1 = 0, number2 = 1, nextTerm = 0;

    for (int i = 1; i <= length; i = i + 1)
    {
        // For only 0 when lenght is 1
        if (i == length)
        {
            cout << number1;
        }
        // to print , after number
        else
        {
            cout << number1 << ", ";
        }

        nextTerm = number1 + number2;
        number1 = number2;
        number2 = nextTerm;
    }
}