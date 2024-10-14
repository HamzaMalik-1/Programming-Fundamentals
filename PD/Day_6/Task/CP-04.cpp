#include <iostream>
using namespace std;

// Function Prototype
float calculateServiceCharges(char serviceCode, int minutes);
float calculateCallDurationCharges(char callTime, int minutes);
float sum(float number1, float number2);
string findServiceType(char serviceCode);
void displayResult(string serviceType, int minutes, float totalDue);

main()
{
    // Declaration
    char serviceCode, callTime = 'w';
    int minutes;
    float serviceCharges, durationCharges, totalDue;
    string serviceType;

    // Inputs
    cout << "Enter the service code ( R / r for regular , P / p for premium) : ";
    cin >> serviceCode;

    // Check Sevice is Premium or not
    if (serviceCode == 'p' || serviceCode == 'P')
    {
        cout << "Enter time of the call ( D / d for day , N / n for night ) : ";
        cin >> callTime;
    }

    cout << "Enter the number of minutes used : ";
    cin >> minutes;

    serviceCharges = calculateServiceCharges(serviceCode, minutes);
    durationCharges = calculateCallDurationCharges(callTime, minutes);
    totalDue = sum(serviceCharges, durationCharges);
    serviceType = findServiceType(serviceCode);

    // Output
    displayResult(serviceType, minutes, totalDue);
}

// Function to find Service Charges
float calculateServiceCharges(char serviceCode, int minutes)
{
    float charges;
    if (serviceCode == 'r' || serviceCode == 'R')
    {
        if (minutes <= 50)
        {
            charges = 10.00;
        }
        // When Minutes greater than 50
        else
        {
            charges = 0.20 * minutes;
        }
    }

    else if (serviceCode == 'p' || serviceCode == 'P')
    {
        charges = 25.00;
    }

    else
    {
        cout << "Wrong Service Code " << endl;
        return 0.0;
    }

    return charges;
}

// Funtion to find Call Duration Charges
float calculateCallDurationCharges(char callTime, int minutes)
{
    float charges;

    if (callTime == 'd' || callTime == 'D')
    {
        if (minutes <= 75)
        {
            charges = 0.0;
        }
        // When Minutes > 75
        else
        {
            charges = 75 * 0.10;
        }
    }

    else if (callTime == 'n' || callTime == 'N')
    {
        if (minutes <= 100)
        {
            charges = 0.0;
        }
        // When Minutes > 100
        else
        {
            charges = 75 * 0.05;
        }
    }

    else
    {
        return 0.0;
    }

    return charges;
}

//  Funtion to check Service type
string findServiceType(char serviceCode)
{
    if (serviceCode == 'r' || serviceCode == 'R')
    {
        return "Regular";
    }

    // When Service Code is p or P
    else if (serviceCode == 'p' || serviceCode == 'P')
    {
        return "Premium";
    }
    else
    {
        return "Not any Service";
    }
}

// Funtion to display result
void displayResult(string serviceType, int minutes, float totalDue)
{
    cout << "Service Type : " << serviceType << endl;
    cout << "Total Minutes Used : " << minutes << " minutes"<< endl;
    cout << "Amount Due : $" << totalDue << endl;
}

// Funtion to add two number
float sum(float number1, float number2)
{
    return number1 + number2;
}