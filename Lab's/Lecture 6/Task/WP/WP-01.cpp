#include<iostream>
using namespace std;
string canBuyDress( float dressCost , string brand);
main()
{
    float dressCost;
    string brand;

    cout <<"Enter the dress cost : $";
    cin >> dressCost;

    cout << "Enter the dress brand : ";
    cin >> brand ;

    cout << canBuyDress(dressCost,brand);
}
string canBuyDress( float dressCost , string brand)
{
    if(dressCost<1500.0 && brand=="MTJ")
    {
        
            return "Congratulations! You can buy the dress.";
        
        
    }
    return "Sorry , the dress doesn't meet the criteria for purchase.";
}