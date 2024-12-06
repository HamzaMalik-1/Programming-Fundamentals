#include <iostream>
using namespace std;
int findLoctionOfNullCharacter(string word);
void printReverseWord(string word, int nullCharacterLocation);

main()
{
    string word = " ";
    int nullCharacterLocation = 0;
    cout << "Enter a string : ";
    cin >> word;

    nullCharacterLocation = findLoctionOfNullCharacter(word);

    printReverseWord(word, nullCharacterLocation);
}

void printReverseWord(string word, int nullCharacterLocation)
{
    cout << "Reverse String : ";
    for (int counter = nullCharacterLocation; counter >= 0; counter = counter - 1)
    {
        cout <<word[counter];
    }
}

int findLoctionOfNullCharacter(string word)
{
    int location = 0;
    while (word[location] != '\0')
    {
        location = location + 1;
    }

    return location;
}