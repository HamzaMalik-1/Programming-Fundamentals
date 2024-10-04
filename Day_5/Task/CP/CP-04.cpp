#include <iostream>
using namespace std;

int projectTimeCalculation(int neededHour, int days, int numOfWorker);
void display(int neededHour, int totalWorkingHour);
main()
{
    int days, neededHour, numOfWorker;

    cout << "Enter the needed hours : ";
    cin >> neededHour;

    cout << "Enter the days that the firm has : ";
    cin >> days;

    cout << "Enter the number of all workers : ";
    cin >> numOfWorker;

    int totalWorkingHour = projectTimeCalculation(neededHour, days, numOfWorker);
    display(neededHour, totalWorkingHour);
}

int projectTimeCalculation(int neededHour, int days, int numOfWorker)
{
    int overTime = 2, perDayWorkHour = 8;
    float trainingDays = (days * 10.0) / 100;
    float workingDays = days - trainingDays;
    int totalWorkingHour = workingDays *( perDayWorkHour + overTime) * numOfWorker;
    return totalWorkingHour;
}

void display(int neededHour, int totalWorkingHour)
{
    int hoursDifference = totalWorkingHour - neededHour;
    if (neededHour < totalWorkingHour)
    {
        cout << "Yes! " << hoursDifference << " hours left.";
    }
    else
    {
        cout << "Not enough time! " << -hoursDifference << " hours needed.";
    }
}