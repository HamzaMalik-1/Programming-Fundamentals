#include <iostream>
using namespace std;

// Function Prototype
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
string checkArrivalStatus(int arrivalTimeInMinutes, int examTimeInMinutes);
string timeCalculation(int arrivalTimeInMinutes, int examTimeInMinutes);

main()
{
    // Declaring Variables
    int examHour, examMinutes, studentHour, studentMinute;

    // Taking inputs from the user
    cout << "Enter Exam starting time ( 0 - 23 ) hours : ";
    cin >> examHour;

    cout << "Enter Exam starting minutes (0 - 59) minutes : ";
    cin >> examMinutes;

    cout << "Enter Student arrival starting time ( 0 - 23 ) hours : ";
    cin >> studentHour;

    cout << "Enter Student arrival starting minutes (0 - 59) minutes : ";
    cin >> studentMinute;

    // Output
    cout << checkStudentStatus(examHour, examMinutes, studentHour, studentMinute);
}

// Function to check the Student Status
string checkStudentStatus(int examHour, int examMinutes, int studentHour, int studentMinute)
{
    // Converting all time into same units
    int examTimeInMinutes = (examHour * 60) + examMinutes;
    int arrivalTimeInMinutes = (studentHour * 60) + studentMinute;

    // Given Condition check wrong inputs
    if (!(examHour >= 24 || studentHour >= 24 || examMinutes >= 60 || studentMinute >= 60 || examHour < 0 || studentHour < 0 || examMinutes < 0 || studentMinute < 0))
    {
        cout << checkArrivalStatus(arrivalTimeInMinutes, examTimeInMinutes) << endl;
        if (examTimeInMinutes - arrivalTimeInMinutes != 0)
        {
            return timeCalculation(arrivalTimeInMinutes, examTimeInMinutes);
        }
    }
    else
    {
        return "Wrong Inputs";
    }
}

// Function to check arrival status
string checkArrivalStatus(int arrivalTimeInMinutes, int examTimeInMinutes)
{

    if (arrivalTimeInMinutes > examTimeInMinutes)
    {
        return "Late";
    }
    else if (examTimeInMinutes - arrivalTimeInMinutes <= 30)
    {
        return "On time";
    }
    else if (examTimeInMinutes - arrivalTimeInMinutes > 30)
    {
        return "Early";
    }
    return "Error";
}

// Function to calculate time
string timeCalculation(int arrivalTimeInMinutes, int examTimeInMinutes)
{
    // examTimeInMinutes - arrivalTimeInMinutes > 0 show that student arrival before exam
    if ((examTimeInMinutes - arrivalTimeInMinutes < 60) && (examTimeInMinutes - arrivalTimeInMinutes >= 0))
    {
        int minutes = examTimeInMinutes - arrivalTimeInMinutes;
        return to_string(minutes) + " minutes before the start";
    }

    else if (examTimeInMinutes - arrivalTimeInMinutes >= 60)
    {
        int hour = (examTimeInMinutes - arrivalTimeInMinutes) / 60;
        int minutes = (examTimeInMinutes - arrivalTimeInMinutes) % 60;
        // To check weather we need to add :0 or not
        if (minutes < 10 && minutes >= 0)
        {
            return to_string(hour) + ":0" + to_string(minutes) + " hours before the start";
        }

        return to_string(hour) + ":" + to_string(minutes) + " hours before the start";
    }

    // arrivalTimeInMinutes-examTimeInMinutes > 0 show that student arrival after exam
    else if ((arrivalTimeInMinutes - examTimeInMinutes < 60) && (arrivalTimeInMinutes - examTimeInMinutes >= 0))
    {
        int minutes = arrivalTimeInMinutes - examTimeInMinutes;
        return to_string(minutes) + " minutes after the start";
    }

    else if (arrivalTimeInMinutes - examTimeInMinutes >= 60)
    {
        int hour = (arrivalTimeInMinutes - examTimeInMinutes) / 60;
        int minutes = (arrivalTimeInMinutes - examTimeInMinutes) % 60;
        // To check weather we need to add :0 or not
        if (minutes < 10 && minutes >= 0)
        {
            return to_string(hour) + ":0" + to_string(minutes) + " hours after the start";
        }

        return to_string(hour) + ":" + to_string(minutes) + " hours after the start";
    }

    return "Error";
}