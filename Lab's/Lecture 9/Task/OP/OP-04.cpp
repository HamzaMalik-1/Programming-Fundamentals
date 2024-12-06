#include <iostream>
using namespace std;
void printReverseArray(int numberArray[], int totalElement);

main()
{
    int totalElement = 0;

    cout << "Enter the number of elements : ";
    cin >> totalElement;

    if (totalElement > -1)
    {
        int numberArray[totalElement] = {0};
        cout << "Enter " << totalElement << " numbers, one per line : " << endl;
        for (int counter = 0; counter < totalElement; counter = counter + 1)
        {
            cin >> numberArray[counter];
        }
        printReverseArray(numberArray, totalElement);
    }

    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}

void printReverseArray(int numberArray[], int totalElement)
{
    cout << "Number in reverse order : ";

    for (int counter = totalElement - 1; counter > -1; counter = counter - 1)
    {
        cout << numberArray[counter] << " ";
    }
}