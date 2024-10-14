#include <iostream>
using namespace std;

// Function Prototype
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
    // Declaring Variable
    string yearType;
    int holidays, hometownWeekends, totalPlayTime;

    // Taking inputs
    cout << "Enter year type : ";
    cin >> yearType;

    cout << "Enter number of holidays : ";
    cin >> holidays;

    cout << "Enter number of weekends : ";
    cin >> hometownWeekends;

    // Assigning Function return to totalPlayTime
    totalPlayTime = calculateVolleyballGames(yearType, holidays, hometownWeekends);

    // Output
    cout << totalPlayTime;
}

// Function Defination
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    // Doing Calculation
    int weekends = 48;
    float weekendsInSofia = (weekends - hometownWeekends) * 0.75;
    float holidaysPlay = holidays * 0.66;
    int hometownPlay = hometownWeekends;
    float totalPlays = weekendsInSofia + holidaysPlay + hometownPlay;
    // Check is it leap year or not?
    if (yearType == "leap")
    {
        totalPlays = totalPlays + (totalPlays * 0.15);
    }
    // totalPlays is floating value but function is int datatype so integer value is return
    return totalPlays;
}