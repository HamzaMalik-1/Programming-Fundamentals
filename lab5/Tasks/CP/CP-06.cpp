#include <iostream>

using namespace std;
void checkAlphabetCase(char character);
main()
{
    char character ;

    cout << "Enter a character (A/a) : " ;
    cin >>character ;
    checkAlphabetCase(character);
}

void checkAlphabetCase(char character)
{
    if( character == 'A'){
        cout << "Your have entered Capital " << character ;
    }

    if( character == 'a'){
        cout << "Your have entered small " << character ;
    }
}