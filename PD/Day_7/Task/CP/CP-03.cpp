#include <iostream>
using namespace std;

// Function Prototype
void amplify(int number);

main()
{
    // Variable
    int number = 0;

    // Input
    cout << "Enter a number to Amplify : ";
    cin >> number;

    // Function Call
    amplify(number);
}

// Function to find amplify
void amplify(int number)
{
    // loop
    for (int i = 1; i <= number; i = i + 1)
    {
        if (i % 4 == 0)
        {
            // Output
            cout << i * 10 << " , ";
        }
        else if (i == number)
        {
            // Output
            cout << i;
        }

        else
        {
            // Output
            cout << i << " , ";
        }
    }
}