#include <iostream>
using namespace std;
int findIndex(string word);
void display(int totalIndex);
main()
{
    string word = "";

    cout << "Enter a word : ";
    cin >> word;

    int totalIndex = findIndex(word);

    display(totalIndex);
}

int findIndex(string word)
{
    int index = 0;
    while (word[index] != '\0')
    {
        index = index + 1;
    }
    return index;
}

void display(int totalIndex)
{
    if (totalIndex % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}