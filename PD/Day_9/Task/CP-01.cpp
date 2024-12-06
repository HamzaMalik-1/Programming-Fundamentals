#include <iostream>
using namespace std;
int findIndex(string fruit[],int sizeOfArrays,string fruitName);


main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    int sizeOfArrays = 4;
    string fruitName = "";
    int quantity = 0,totalPrice=0;

    cout <<"Enter Fruit Name : ";
    cin >> fruitName;

    cout << "Enter the quantity : ";
    cin >> quantity;

    int searchIndex = findIndex(fruit, sizeOfArrays,fruitName);

    if (searchIndex>=0)
    {
        totalPrice = price[searchIndex] * quantity;
        cout << "Total bill is : "<<totalPrice;
    }
    else
    {
        cout <<fruitName << " does not exist in the array";
    }
    


    
}
int findIndex(string fruit[],int sizeOfArrays,string fruitName)
{
    for (int counter = 0; counter < sizeOfArrays; counter=counter+1)
    {
        if (fruit[counter]==fruitName)
        {
            return counter;
        }
        
    }
    return -1;
}
