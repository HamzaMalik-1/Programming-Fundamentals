#include<iostream>
using namespace std;
string inputString();
int finddifferentColor(string color[],int size);
int calculation(int  numberOfChangeColor,int numberOfColors);
main()
{
    int numberOfColors=0;

    cout << "Enter the number of colours you have : ";
    cin >>numberOfColors;


    string color[numberOfColors]={""};

    cout << "Enter " << numberOfColors << " colours : "<<endl;
    for (int counter = 0; counter < numberOfColors; counter=counter+1)
    {
        color[counter]=inputString();
    }

    int numberChangeColor=finddifferentColor(color,numberOfColors);

    int duration=calculation(numberChangeColor,numberOfColors);
    cout << duration;
    
}

string inputString()
{
    string word;
    cin >> word;

    return word;
}

int finddifferentColor(string color[],int size)
{
    int difference=0;
    for (int counter = 1; counter < size; counter=counter+1)
    {
        if (color[counter]==color[counter+1])
        {
            continue;
        }
            difference=difference+1;
    }
    return difference;

}
int calculation(int  numberOfChangeColor,int numberOfColors)
{
   int duration =numberOfChangeColor+(numberOfColors*2);        
    return duration;
}