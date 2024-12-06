//check again
#include <iostream>
using namespace std;
int transform(int number);
void display(int array[], int sizeOfArray);
main()
{
    int sizeOfArray = 0, transformNumber = 0;
    cout << "Enter the size of array : ";
    cin >> sizeOfArray;

    int array[sizeOfArray] = {0};

    cout << "Enter array of " << sizeOfArray << " size : "<<endl;
    for (int counter = 0; counter < sizeOfArray; counter = counter + 1)
    {
        cin >> array[counter];
    }

    cout << "Enter number of times even-odd transformation need to be done : ";
    cin >> transformNumber;

    for (int counter = 1; counter <= transformNumber; counter = counter + 1)
    {
        for (int counter = 0; counter < sizeOfArray; counter = counter + 1)
        {
            array[counter] = transform(array[counter]);
        }
    }
    display(array,sizeOfArray);
}

int transform(int number)
{
    if (number % 2 == 0)
    {
        return (number - 2);
    }
    else
    {
        return (number + 2);
    }
}

void display(int array[], int sizeOfArray)
{
    int counter = 0;
    cout << "[ ";
    for (counter = 0; counter < sizeOfArray - 1; counter = counter + 1)
    {
        cout <<array[counter] << " , ";
    }
    cout << array[counter] << " ]";
}