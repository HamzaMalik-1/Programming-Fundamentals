#include <iostream>
using namespace std;
int findLargestNumber(int numberArrary[], int totalElement);


main()
{
    int totalElement = 0,maximumNumber=0;
    cout << "Enter the number of elements : ";
    cin >> totalElement;

    int numberArray[totalElement] = {0};
    cout << "Enter " << totalElement << " numbers, one per line : " << endl;
    for (int counter = 0; counter < totalElement; counter = counter + 1)
    {
        cin >> numberArray[counter];
    }

    maximumNumber=findLargestNumber(numberArray,totalElement);

    cout << "The largest number entered is : " << maximumNumber;
}
int findLargestNumber(int numberArrary[], int totalElement)
{
    int maximumNumber=-1;
    for (int counter = 0; counter < totalElement; counter = counter + 1)
    {
        if (maximumNumber<numberArrary[counter])
        {
            maximumNumber=numberArrary[counter];
        }
    }

    return maximumNumber;
}