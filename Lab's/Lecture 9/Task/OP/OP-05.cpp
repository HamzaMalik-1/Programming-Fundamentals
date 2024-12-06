#include<iostream>
using namespace std;
main()
{
    int sizeOfArray=0;
    cout << "Enter size of Array : ";
    cin >> sizeOfArray;

    int arr[sizeOfArray];

    for (int counter = 0; counter < sizeOfArray; counter=counter+1)
    {
        cout<<"Enter "<<counter+1 << " Number : ";
        cin >> arr[counter];
    }

    for (int counter = 0; counter < sizeOfArray; counter=counter+1)
    {
        cout<<"Element " << counter+1 << " is : "<<arr[counter]<<endl;
    }

    
}