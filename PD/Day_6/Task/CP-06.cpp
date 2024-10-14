#include <iostream>
#include <string>

using namespace std;

// Function Prototype
string calculateHotelPrices(string month, int numberOfStays);

main()
{
    // Variable Declaration
    string month;
    int numberOfStays;

    // Inputs
    cout << "Enter the month ( May, June, July, August, September or October) : ";
    cin >> month;

    cout << "Number of stays ( 0 - 200 ) : ";
    cin >> numberOfStays;

    // Output
    cout << calculateHotelPrices(month, numberOfStays);
}

// Function to Calculate Prices
string calculateHotelPrices(string month, int numberOfStays)
{
    float studioPrice, apartmentPrice;
    if (month == "May" || month == "October")
    {
        studioPrice = 50.0 * numberOfStays;
        cout << "Studio price before Discout : " << studioPrice << endl;
        apartmentPrice = 65.0 * numberOfStays;

        // For more than 7 stays apply discout 5%
        if (numberOfStays > 7 && numberOfStays < 14)
        {
            studioPrice = studioPrice - (studioPrice * 0.05);
        }

        // For more than 14 stays apply discout 30%
        else if (numberOfStays > 14)
        {
            studioPrice = studioPrice - (studioPrice * 0.3);
            cout << "Studio price before Discout * 0.3  :" << studioPrice * 0.3 << endl;
            cout << "Studio price after Discout : " << studioPrice << endl;
        }
    }

    else if (month == "June" || month == "September")
    {
        studioPrice = 75.20 * numberOfStays;
        apartmentPrice = 68.70 * numberOfStays;

        // For more than 14 stays apply discout 20%
        if (numberOfStays > 14)
        {
            studioPrice = studioPrice - (studioPrice * 0.20);
        }
    }

    else if (month == "July" || month == "August")
    {
        studioPrice = 76.00 * numberOfStays;
        apartmentPrice = 77.00 * numberOfStays;
    }

    // Apply 10% discout for apartment price if stays is more than 14
    if (numberOfStays > 14)
    {
        apartmentPrice = apartmentPrice - (apartmentPrice * 0.1);
    }

    return "Apartment : " + to_string(apartmentPrice) + "$\nStudio : " + to_string(studioPrice) + "$";
}