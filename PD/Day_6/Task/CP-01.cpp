#include <iostream>

using namespace std;

// Function Prototype
string decideActivity(string temperature, string humidity);
main()
{
    // Declaration
    string temperature, humidity;

    // Inputs
    cout << "Enter temperature ( warm or cold ) : ";
    cin >> temperature;

    cout << "Enter humidity ( dry or humid ) : ";
    cin >> humidity;

    // Output
    cout << "Recommended activity :  " << decideActivity(temperature, humidity);
}

// Function to decide Activity
string decideActivity(string temperature, string humidity)
{
    if (temperature == "warm" && humidity == "dry")
    {
        return "Play tennis";
    }

    if (temperature == "warm" && humidity == "humid")
    {
        return "swim";
    }

    if (temperature == "cold" && humidity == "dry")
    {
        return "Play basketball";
    }

    if (temperature == "cold" && humidity == "humid")
    {
        return "Watch tv";
    }
}