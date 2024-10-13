#include<iostream>
using namespace std;
string grade(int marks);
main()
{
    int marks ;

    cout << "Enter your marks : ";
    cin >> marks ;

    cout << grade ( marks);
}
string grade(int marks)
{
    if( marks < 50 )
    {
        return "Student has Failed the subject Grade : F";
    }
    else if( marks > 51 && marks <= 60 )
    {
        return "Student has Passed the subject Grade : E";
    }
    else if( marks > 60 && marks <= 70 )
    {
        return "Student has Passed the subject Grade : D";
    }
    else if( marks > 70 && marks <= 80 )
    {
        return "Student has Passed the subject Grade : C";
    }
    else if( marks > 80 && marks <= 85 )
    {
        return "Student has Passed the subject Grade : B";
    }
    else if( marks > 85 )
    {
        return "Student has Passed the subject Grade : A";
    }
    else
    {
        return "You input an invalid marks";
    }
    
}