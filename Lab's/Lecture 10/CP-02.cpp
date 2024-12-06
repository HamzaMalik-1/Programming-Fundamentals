#include<iostream>
using namespace std;
int findRepeatition(string sentence[],int sizeOfArray,string character);
main()
{
    int sizeOfArray=0;
    string character=' ';
    int repeadtedCharacter=0;
     cout << "How many sentences you want to enter : ";
     cin >>sizeOfArray;

     string sentences[sizeOfArray]={""};

     cout << "Enter each sentence in one line : "<<endl;
     for (int counter = 0; counter < sizeOfArray; counter=counter+1)
     {
        cin >>sentences[counter];
     }  

     cout << "Enter a letter : ";
     cin >> character;

    repeadtedCharacter= findRepeatition(sentences,sizeOfArray,character);

    cout << character << " shows up " << repeadtedCharacter << " times in data."; 
}
int findRepeatition(string sentence[],int sizeOfArray,string character)
{
    int repeatition=0;
    for (int counter = 0; counter < sizeOfArray; counter=counter+1)
    {
        int count=0;
        while (sentence[count]!='\0')
        {
           if (character==sentence[counter])
           {
            repeatition=repeatition+1;
           }        
        }     
    }
    return repeatition;
    
}