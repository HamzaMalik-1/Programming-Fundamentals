#include <iostream>
using namespace std;
string inputString(string data);
// string makeSingleString(string sentence);
int findSizeOfString(string sentence);
void concatinaton(string sentence);

main()
{
    string sentence = inputString("Enter the argument 'a' : ");

    // string requireString = makeSingleString(sentence);

    concatinaton(sentence);
    
}
string inputString(string data)
{
    string value = "";
    cout << data;
    getline(cin, value);
    return value;
}

// string makeSingleString(string sentence)
// {
//     string result = "something " + sentence;
//     return result;
// }


int findSizeOfString(string sentence)
{
    int sizeOfString = 0;
    while (sentence[sizeOfString] != '\0')
    {
        sizeOfString = sizeOfString + 1;
    }
    return sizeOfString;
}

void concatinaton(string sentence)
{
    int counter = 0;
    string givenString = "something ";
    int sizeOfGivenString = findSizeOfString(givenString);
    int sizeOfSentence = findSizeOfString(sentence);
    int spaceSize = 1;
    int sizeOfRequireString = sizeOfGivenString + sizeOfSentence;
    string requireString;

    for (counter = 0; counter < sizeOfGivenString; counter = counter + 1)
    {
        requireString[counter] = givenString[counter];
    }

    for (int newCounter = 0; newCounter < sizeOfSentence; newCounter = newCounter + 1)
    {
        requireString[counter] = sentence[newCounter];
        counter=counter+1;

    }
   
    for (int i = 0; i < sizeOfRequireString; i++)
    {
        cout<< requireString[i];
    }
}

