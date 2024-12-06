#include <iostream>
using namespace std;
int discountedPrice(int ticketPrice, int searchIndex);
int findIndex(string movies[], int sizeOfArrays, string movieName);
main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int ticketPrice = 500;
    string movieName = "";

    cout << "Enter movie name : ";
    cin >> movieName;

    int searchIndex = findIndex(movies, 5, movieName);
    if (searchIndex >= 0)
    {
        int totalPrice = discountedPrice(ticketPrice, searchIndex);
        cout<<"Payable : "<< totalPrice;
    }
    else
    {
        cout << movieName << " does not exist in array.";
    }
    
}

int findIndex(string movies[], int sizeOfArrays, string movieName)
{
    for (int counter = 0; counter < sizeOfArrays; counter = counter + 1)
    {
        if (movies[counter] == movieName)
        {
            return counter;
        }
    }
    return -1;
}

int discountedPrice(int ticketPrice, int searchIndex)
{
    if (searchIndex % 2 == 0)
    {
        return (ticketPrice - (ticketPrice * 0.1));
    }
    else
    {
        return (ticketPrice - (ticketPrice * 0.05));
    }
}