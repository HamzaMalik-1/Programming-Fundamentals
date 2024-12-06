#include<iostream>
using namespace std;
bool isSpecialArray(int array[], int sizeOfArray);

main()
{
    int sizeOfArray=0;

    cout << "Enter the size of the array : ";
    cin >> sizeOfArray;

    int array[sizeOfArray]={0};

    cout<<"Enter " <<sizeOfArray <<" elements of the array : "<<endl;
    for (int counter = 0; counter < sizeOfArray; counter=counter+1)
    {
        cin>>array[counter];
    }

    if(isSpecialArray(array,sizeOfArray))
    {
        cout << "The array is special";
    }
    else
    {
        cout<< "The array is not special";
    }
    
}

bool isSpecialArray(int array[], int sizeOfArray)
{
    for (int counter = 0; counter < sizeOfArray-1; counter=counter+2)
    {
        if (!(array[counter]%2==0 && array[counter+1]%2 !=0))
        {
           return false;
        }    
    }
    return true;
}