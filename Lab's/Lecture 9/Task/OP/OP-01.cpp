#include <iostream>
using namespace std;

void wordPostmortem(char *word, int sizeOfWord);
int findSize(string word);
main()
{
    string word = " ";
    int counter = 0, sizeOfWord = 0;
    cout << "Enter a word : ";
    cin >> word;

    sizeOfWord = findSize(word);

    char wordArray[sizeOfWord] = {'0'};

    for (int count = 0; count <= sizeOfWord; count = count + 1)
    {
        wordArray[count] = char(word[count]);
    }

    wordPostmortem(wordArray, sizeOfWord);
}

int findSize(string word)
{
    int sizeOfWord = 0, counter = 0;
    while (word[counter] != '\0')
    {
        sizeOfWord = sizeOfWord + 1;
        counter = counter + 1;
    }
    return sizeOfWord;
}
void wordPostmortem(char *word, int sizeOfWord)
{

    for (int counter = 0; counter < sizeOfWord; counter = counter + 1)
    {
        cout << word[counter] << " found at position : " << counter << endl;
    }
}