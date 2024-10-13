#include <iostream>
#include <string>
using namespace std;
float calculateRemainingBudget(int people, float budget);
float calculateTicketPrice(int people, string category);
string displayOutput(float remainingBudget, float ticketsPrice);
main()
{
    float budget, remainingBudget, ticketsPrice;
    int people;
    string category;

    cout << "Enter the budget : ";
    cin >> budget;

    cout << "Enter the category ( VIP / Normal ) : ";
    cin >> category;

    cout << "Enter the number of people in the group : ";
    cin >> people;

    remainingBudget = calculateRemainingBudget(people, budget);
    ticketsPrice = calculateTicketPrice(people, category);

    cout << displayOutput(remainingBudget, ticketsPrice);
}

float calculateRemainingBudget(int people, float budget)
{
    float remainingBudget;

    if (people >= 1 && people <= 4)
    {
        remainingBudget = budget - (budget * 0.75);
    }

    if (people >= 5 && people <= 9)
    {
        remainingBudget = budget - (budget * 0.60);
    }

    if (people >= 10 && people <= 24)
    {
        remainingBudget = budget - (budget * 0.50);
    }

    if (people >= 25 && people <= 49)
    {
        remainingBudget = budget - (budget * 0.40);
    }

    if (people >= 50)
    {
        remainingBudget = budget - (budget * 0.25);
    }
    return remainingBudget;
}

float calculateTicketPrice(int people, string category)
{
    float VIPTicket = 499.99, normalTicket = 249.99;
    float ticketsPrice = people * normalTicket;

    if (category == "VIP")
    {
        ticketsPrice = people * VIPTicket;
    }
    return ticketsPrice;
}

string displayOutput(float remainingBudget, float ticketsPrice)
{
    float amount = remainingBudget - ticketsPrice;
    if (remainingBudget > ticketsPrice)
    {
        return "Yes! You have " + to_string(amount) + " leva left";
    }
    amount = -amount;
    return "Not enough money! You need " + to_string(amount) + " leva.";
}