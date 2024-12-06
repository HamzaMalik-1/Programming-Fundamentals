#include <iostream>
using namespace std;
void output(int array[], int sizeOfArray);
main()
{
    int sizeOfArray = 0;
    cout << "Enter Size of array : ";
    cin >> sizeOfArray;

    int array[sizeOfArray] = {0};

    cout << "Enter " << sizeOfArray << " number in line : " << endl;

    for (int counter = 0; counter < sizeOfArray; counter = counter + 1)
    {
        cin >> array[counter];
    }

    output(array, sizeOfArray);
}
void output(int array[], int sizeOfArray)
{
    for (int counter = 0; counter < sizeOfArray; counter = counter + 1)
    {
        int number=array[counter];
        while (number>0)
        {
        if ( number%10== 7)
        {
            cout << "Boom!";
            return;
        }
        number=number/10;
        }
        
    }
    cout << "there is no 7 in the array";
}