#include<iostream>
using namespace std;
string inputString(string statement , int number);
int sizeOfString(string word);
int findCommon(string word1, int sizeOfWord1, string word2,int sizeOfWord2);

main()
{
    string word[2]={""};
    int sizeOfword[2]={0};
    int common=0;

    for (int counter = 0; counter < 2; counter++)
    {
        word[counter]=inputString("Enter String ",(counter+1));
        sizeOfword[counter]=sizeOfString(word[counter]);
    }
    
    common = findCommon(word[0],sizeOfword[0],word[1],sizeOfword[1]);

    cout << common;
}

string inputString(string statement,int number)
{
    string word;
    cout << statement <<number << " : ";
    cin >> word;

    return word;
}

int sizeOfString(string word)
{
    int size=0;
    while (word[size]!='\0')
    {
        size=size+1;
    }

    return size;
    
}

int findCommon(string word1, int sizeOfWord1, string word2,int sizeOfWord2)
{
     int commonCount = 0;
    int findIndex[50];
    int index = 0;
    int counter1 = 0;
    while (word1[counter1] != '\0')
    {
        int counter2 = 0;
        while (word2[counter2] != '\0')
        {
            counter2=counter2+1;
            bool isFound = false;
            for (int k = 0; k < index; k++)
            {
                if (findIndex[k] == counter2)
                {
                    isFound = true;
                    break;
                }
            }
            if (isFound)
            {
                continue;
            }
            else
            {
                if (word1[counter1] == word2[counter2])
                {
                    findIndex[index] = counter2;
                    index=index+1;
                    break;
                }
            }
        }
        counter1=counter1+1;;
    }
    return index;
}