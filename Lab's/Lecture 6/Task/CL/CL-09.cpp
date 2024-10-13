#include<iostream>
using namespace std ;
string getTitle(char gender , int age);
main()
{
    int age ;
    char gender;

    cout << "Enter your age : ";
    cin >> age ;

    cout << "Enter your gender (m/f) : ";
    cin >> gender;

    cout << "Your personal title is : " << getTitle(gender,age);
}
string getTitle(char gender , int age)
{
    if(gender=='m')
    {
        if (age >= 16)
        {       
            return "Mr.";
        }
        else
        {
            return "Master";
        }       
    }
    else
    {
        if(age >= 16)
        {
            return "Ms.";
        }
        else
        {
            return "Miss";
        }
        

    }
    
}