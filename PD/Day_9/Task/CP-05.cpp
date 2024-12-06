#include<iostream>
using namespace std;
void output(string array[],int size);
bool checkSame(string array[],int size);
main()
{
    string array[4]={""};

    cout << "Enter 4 words : "<<endl;

    for (int counter = 0; counter < 4; counter=counter+1)
    {
        cin>>array[counter];
    }
    
    output(array,4);
}


void output(string array[],int size)
{
   
    
    if (checkSame(array,size))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}
bool checkSame(string array[],int size)
{
     for (int counter = 0; counter < size-1; counter=counter+1)
    {
        if (array[counter]!=array[counter+1])
        {
            return false;
        }
        
    }
    return true;
}