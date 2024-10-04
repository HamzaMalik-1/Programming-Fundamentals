#include <iostream>
using namespace std;
int percentage(float value, float totalValue);
void display(int volume, int poolFill, int pipe1Contribute, int pipe2Contribute, int totalPipe, float hour);

main()
{
    int volume, pipe1, pipe2, totalPipe, height, poolFill, totalFill, pipe1Contribute, pipe2Contribute;
    float hour;

    cout << "Enter volume of the pool in liters: ";
    cin >> volume;

    cout << "Enter flow rate of the first pipe per hour : ";
    cin >> pipe1;

    cout << "Enter flow rate of the second pipe per hour : ";
    cin >> pipe2;

    cout << "Enter hours that the worker is absent : ";
    cin >> hour;

    totalPipe = (pipe1 + pipe2) * hour;

    poolFill = percentage(totalPipe, volume);
    totalFill = (poolFill / 100.0) * volume;
    pipe1Contribute = percentage(pipe1 * hour, totalFill);
    pipe2Contribute = percentage(pipe2 * hour, totalFill);

    display(volume, poolFill, pipe1Contribute, pipe2Contribute, totalPipe, hour);
}

int percentage(float value, float totalValue)
{
    int result = (value / totalValue) * 100;
    return result;
}

void display(int volume, int poolFill, int pipe1Contribute, int pipe2Contribute, int totalPipe, float hour)
{
    if (volume > totalPipe)
    {
        cout << "The pool is " << poolFill << "% full. Pipe 1 : " << pipe1Contribute << "%. " << "Pipe 2 : " << pipe2Contribute << "%.";
    }
    if (volume < totalPipe)
    {
        cout << "For " << hour << " hours, the pool overfloew with " << totalPipe - volume << " liters";
    }
}