#include <iostream>
using namespace std;
int checkProgress(int miles[], int sizeOfArray);
main()
{
    int sizeOfArray = 0, dayOfProgress = 0;
    cout << "How many days data you want to enter : ";
    cin >> sizeOfArray;

    int miles[sizeOfArray] = {0};
    cout << "Enter all data one at a line : " << endl;
    for (int counter = 0; counter < sizeOfArray; counter = counter + 1)
    {
        cin >> miles[counter];
    }

    dayOfProgress = checkProgress(miles, sizeOfArray);
    cout <<"There are " << dayOfProgress << " progress days.";
}
int checkProgress(int miles[], int sizeOfArray)
{
    int dayOfProgress = 0;
    for (int counter = 0; counter < sizeOfArray - 1; counter++)
    {
        if (miles[counter + 1] > miles[counter])
        {
            dayOfProgress = dayOfProgress + 1;
        }
    }
    return dayOfProgress;
}