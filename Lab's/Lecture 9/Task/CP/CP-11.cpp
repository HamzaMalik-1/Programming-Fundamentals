// Remove Vowel
#include <iostream>
using namespace std;
string inputString(string data);
void removeVowel(string sentence, int sizeOfString);

main()
{
    string sentence = inputString("Enter a string : ");
    int sizeOfString = findSizeOfString(sentence);
    removeVowel(sentence, sizeOfString);
}

string inputString(string data)
{
    string value = "";
    cout << data;
    getline(cin, value);
    return value;
}

int findSizeOfString(string sentence)
{
    int sizeOfString = 0;
    while (sentence[sizeOfString] != '\0')
    {
        sizeOfString = sizeOfString + 1;
    }
    return sizeOfString;
}

void removeVowel(string sentence, int sizeOfString)
{
    cout << "String with vowels removed : ";
    for (int counter = 0; counter < sizeOfString; counter = counter + 1)
    {
        if (sentence[counter] == 'a' || sentence[counter] == 'A' || sentence[counter] == 'e' || sentence[counter] == 'E' || sentence[counter] == 'i' || sentence[counter] == 'I' || sentence[counter] == 'o' || sentence[counter] == 'O' || sentence[counter] == 'u' || sentence[counter] == 'U')
        {
            continue;
        }
        cout << sentence[counter];
    }
}
