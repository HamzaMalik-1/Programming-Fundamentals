#include <iostream>
using namespace std;
void inputLine(int number, string arrayNumber);
void insertArrayInMiddle(int firstArray[], int firstArraySize,int secondArray[],int secondArraySize);
main()
{
    int sizeOfArray[2] = {0};

    while (sizeOfArray[0] != 2)
    {
        cout << "Enter the number of elements for the first array (must be 2) : ";
        cin >> sizeOfArray[0];
    }

    int firstArray[sizeOfArray[0]] = {0};

    inputLine(sizeOfArray[0],"first");
    for (int counter = 0; counter < sizeOfArray[0]; counter = counter + 1)
    {
        cin >> firstArray[counter];
    }

    cout << "Enter the number of elements for the second array : ";
    cin >> sizeOfArray[1];

    int secondArray[sizeOfArray[1]]={0};
    inputLine(sizeOfArray[1],"second");
    for (int counter = 0; counter < sizeOfArray[1]; counter = counter + 1)
    {
        cin >> secondArray[counter];
    }

    insertArrayInMiddle(firstArray,sizeOfArray[0],secondArray,sizeOfArray[1]);
}
void inputLine(int number, string arrayNumber)
{
    cout << "Enter " << number << "elements for the " << arrayNumber << " array , one per line : " << endl;
}

void insertArrayInMiddle(int firstArray[], int firstArraySize,int secondArray[],int secondArraySize)
{
    int sizeOfResultingArray=firstArraySize+secondArraySize;

    int resultingArray[sizeOfResultingArray]={0};

    resultingArray[0]=firstArray[0];

    for(int counter=0; counter<secondArraySize;counter=counter+1)
    {
        resultingArray[counter+1]=secondArray[counter];
    }
    resultingArray[sizeOfResultingArray-1]=firstArray[firstArraySize-1];


    cout << "Resulting array : [ ";
    for (int counter = 0; counter < sizeOfResultingArray-1; counter=counter+1)
    {
        cout <<resultingArray[counter] <<" , ";
    }
    cout <<resultingArray[sizeOfResultingArray-1] << " ]";
}