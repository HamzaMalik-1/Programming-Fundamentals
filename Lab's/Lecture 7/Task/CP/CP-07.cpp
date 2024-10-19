#include <iostream>
#include <iomanip>

using namespace std;

float findPercentage(int range, int numberCount);
main()
{
    // Variables
    int numberCount = 0, digitLieInSameRange = 0, number = 0, range1 = 0, range2 = 0, range3 = 0, range4 = 0, range5 = 0;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    // Get number counts
    cout << "Enter number count : ";
    cin >> numberCount;

    for (int i = 1; i <= numberCount; i = i + 1)
    {
        // Number input
        cout << "Enter a number : ";
        cin >> number;

        // To check is number lie in range or not
        if (number < 200)
        {
            range1 = range1 + 1;
        }

        else if (number >= 200 && number <= 399)
        {
            range2 = range2 + 1;
        }
        else if (number >= 400 && number <= 599)
        {
            range3 = range3 + 1;
        }
        else if (number >= 600 && number <= 799)
        {
            range4 = range4 + 1;
        }
        else if (number >= 800)
        {
            range5 = range5 + 1;
        }
    }

    // Giving Percentages
    p1 = findPercentage(range1, numberCount);
    p2 = findPercentage(range2, numberCount);
    p3 = findPercentage(range3, numberCount);
    p4 = findPercentage(range4, numberCount);
    p5 = findPercentage(range5, numberCount);

    // Outputs
    cout << fixed << setprecision(2) << p1 << "%" << endl;
    cout << fixed << setprecision(2) << p2 << "%" << endl;
    cout << fixed << setprecision(2) << p3 << "%" << endl;
    cout << fixed << setprecision(2) << p4 << "%" << endl;
    cout << fixed << setprecision(2) << p5 << "%" << endl;
}

// Funtion to find percentage
float findPercentage(int range, int numberCount)
{
    float result = (range * 100.0) / numberCount;
    return result;
}
