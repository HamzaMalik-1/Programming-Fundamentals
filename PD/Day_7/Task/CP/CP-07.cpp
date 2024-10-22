#include <iostream>

using namespace std;
// Function Prototype
string calculatePatients(int numberOfDay);
main()
{
    // Variable
    int numberOfDay = 0;

    // Input
    cout << "Enter Number of days you visited Hospital : ";
    cin >> numberOfDay;

    // Output
    cout << calculatePatients(numberOfDay);
}

// Function For Calculation
string calculatePatients(int numberOfDay)
{
    // Variable
    int totalPatients = 0, treatedPatients = 0, untreatedPatients = 0, doctors = 7;

    for (int counter = 1; counter <= numberOfDay; counter = counter + 1)
    {
        if ((counter % 3 == 0) && (untreatedPatients > treatedPatients))
        {
            doctors = doctors + 1;
        }

        // Input
        cout << "Number of patients who visited hospital on Day " << counter << " : ";
        cin >> totalPatients;

        // Contidions
        if (totalPatients > doctors)
        {

            treatedPatients = treatedPatients + (totalPatients - (totalPatients - doctors));
        }
        else if (totalPatients <= doctors)
        {
            treatedPatients = treatedPatients + totalPatients;
        }

        if (totalPatients > doctors)
        {
            untreatedPatients = untreatedPatients + (totalPatients - doctors);
        }
    }

    return "Treated Patients : " + to_string(treatedPatients) + "\nUntreated Patients : " + to_string(untreatedPatients);
}