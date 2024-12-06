#include <iostream>
using namespace std;
bool isAlreadyEntered(int numberArray[], int totalElement, int number);
void printArray(int numberArray[], int arraySize);

main()
{
    int totalElement = 0, arraySize = 0,number=0;

    cout << "Enter the number of elements : ";
    cin >> totalElement;

    int numberArray[totalElement] = {0};
    cout << "Enter " << totalElement << " numbers, one per line : " << endl;

    arraySize = totalElement;
    for (int counter = 0; counter < arraySize; counter = counter + 1)
    {
        cin >> number;
        if (isAlreadyEntered(numberArray, totalElement, number) && counter!=0)
        {
            cout << "Already Entered : " << number<<endl;
            counter = counter - 1;
            arraySize = arraySize - 1;
        }
        else
        {
            numberArray[counter]=number;
        }
    }
    printArray(numberArray,arraySize);
}

bool isAlreadyEntered(int numberArray[], int totalElement, int number)
{
    for (int counter = 0; counter < totalElement; counter = counter + 1)
    {
        if (numberArray[counter] == number)
        {
            return true;
        }
    }
    return false;
}

void printArray(int numberArray[], int arraySize)
{
    cout << "Unique Number : ";
    for (int counter = 0; counter < arraySize; counter = counter + 1)
    {
        cout << numberArray[counter] << " ";
    }
}