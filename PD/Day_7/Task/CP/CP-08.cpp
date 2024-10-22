#include <iostream>
#include <iomanip>
using namespace std;
// Function Prototype
void findOutput(int cargoCount);
float caculatePercentage(int individualCargo, int totalCargo);
main()
{
    // Variable
    int cargoCount = 0;

    // Input
    cout << "Enter the count of cargo for transportaion : ";
    cin >> cargoCount;

    // Output
    findOutput(cargoCount);
}

// Function to Find Output
void findOutput(int cargoCount)
{
    // Variable
    int tonnage = 0, minibusCargo = 0, truckCargo = 0, trainCargo = 0, totalTonnage = 0;
    float averagePrice = 0, minibusPercentage = 0, truckPercentage = 0, trainPercentage = 0;

    for (int counter = 1; counter <= cargoCount; counter = counter + 1)
    {
        // Input
        cout << "Enter the tonnage of cargo " << counter << " : ";
        cin >> tonnage;

        if (tonnage <= 3)
        {
            minibusCargo = minibusCargo + tonnage;
        }
        else if (tonnage > 3 && tonnage <= 11)
        {
            truckCargo = truckCargo + tonnage;
        }
        // tonnage>11
        else
        {
            trainCargo = trainCargo + tonnage;
        }
        totalTonnage = totalTonnage + tonnage;
    }
    // Calculations
    averagePrice = (minibusCargo * 200.0 + truckCargo * 175.0 + trainCargo * 120.0) / totalTonnage;
    minibusPercentage = caculatePercentage(minibusCargo, totalTonnage);
    truckPercentage = caculatePercentage(truckCargo, totalTonnage);
    trainPercentage = caculatePercentage(trainCargo, totalTonnage);

    // Output
    cout << fixed << setprecision(2) << averagePrice << endl;
    cout << fixed << setprecision(2) << minibusPercentage << "%" << endl;
    cout << fixed << setprecision(2) << truckPercentage << "%" << endl;
    cout << fixed << setprecision(2) << trainPercentage << "%" << endl;
}

// Function to find percentage
float caculatePercentage(int individualCargo, int totalCargo)
{
    float result = (individualCargo * 100.0) / totalCargo;
    return result;
}