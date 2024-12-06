#include<iostream>
using namespace std;
double getInput(string data);
bool canPayWithChange(double amountOfChange[], double totalDue);

main()
{
    double amountOfChange[4]={0},totalDue=0;

    amountOfChange[0]=getInput("quarters : ");
    amountOfChange[1]=getInput("dimes : ");
    amountOfChange[2]=getInput("nickels : ");
    amountOfChange[3]=getInput("pennies : ");

    totalDue=getInput("the total amout due : $");

    cout << "Can you pay the amount? ";
    if (canPayWithChange(amountOfChange,totalDue))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    

}

double getInput(string data)
{
    double value=0;
    cout << "Enter " << data;
    cin >> value;
    return value;
}

bool canPayWithChange(double amountOfChange[], double totalDue)
{
    double totalAmount=(amountOfChange[0] *0.25) + (amountOfChange[1] *0.10) +(amountOfChange[2] *0.05) + (amountOfChange[3] *0.01);

    if (totalAmount>=totalDue)
    {
        return true;
    }
    
    return false;
}