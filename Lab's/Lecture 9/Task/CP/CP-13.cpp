#include<iostream>
using namespace std;
int findSizeOfString(string sentence);
void jazzifyChords(string chords[], int numberOfChords);
bool check(string data,int size);
main()
{
   int numberOfChords=0;

   cout << "Enter the number of chords : ";
   cin>> numberOfChords;

   string chords[numberOfChords]={""};

   cout << "Enter " << numberOfChords << " chords, one per line : "<<endl;
   for (int counter = 0; counter < numberOfChords; counter=counter+1)
   {
    cin>>chords[counter];
   }

   jazzifyChords(chords,numberOfChords);
    
}

int findSizeOfString(string sentence)
{
    int sizeOfString=0;
    while (sentence[sizeOfString]!='\0')
    {
        sizeOfString=sizeOfString+1;
    }
    return sizeOfString;
    
}

void jazzifyChords(string chords[], int numberOfChords)
{
    for (int counter = 0; counter < numberOfChords; counter=counter+1)
    {
        int lengthOfString=findSizeOfString(chords[counter]);
        if(check(chords[counter],lengthOfString))
        {
            chords[counter]= chords[counter] + "7";
        }
    }
    cout<<"Jazzified chords : [ " << chords[0];
    for(int counter=1 ; counter<numberOfChords;counter=counter+1)
    {
        cout<<", "<<chords[counter];
    }
    cout << " ]";
}

bool check(string data,int size)
{
    int counter=0;
    if (data[size-1] != '7' )
    {
        return true;
    }
    return false;    
}