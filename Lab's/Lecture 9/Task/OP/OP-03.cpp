#include <iostream>
using namespace std;
void findShiftedString(string word);
main()
{
    string word = " ", shiftedString = " ";

    cout << "Enter a String : ";
    getline(cin, word);

    findShiftedString(word);
}

void findShiftedString(string word)
{
    cout << "Shifted String : ";
    int asciiCode = 0, counter = 0;
    char character = ' ';
    while (word[counter] != '\0')
    {
        asciiCode = word[counter] + 1;
        character = asciiCode;

        if ((asciiCode - 1) == 32)
        {
            cout << " ";
        }

        else if ((asciiCode - 1) == 122)
        {
            asciiCode = 97;
            character = asciiCode;
            cout << character;
        }

        else if ((asciiCode - 1) == 90)
        {
            asciiCode = 65;
            character = asciiCode;
            cout << character;
        }

        else
        {
            cout << character;
        }

        counter = counter + 1;
    }
}