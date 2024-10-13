#include<iostream>
#include<string>
using namespace std;
string passOrFail(int marks);
main()
{
    int marks ;
    
    cout << "Enter your marks : ";
    cin >> marks;

    cout << passOrFail(marks);
}

string passOrFail(int marks)
{
    if ( marks >50){
        return "You are Passed with " + to_string(marks) + " marks";
    }
    else
    {
        return "You are Failed with " + to_string(marks) + " marks";
    }
    
}