#include <iostream>

using namespace std;

// Function Prototype
float input(string subject);
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float percentage);
void displayResult(string studentName, float percentage, string grade);

main()
{
    // Inputs
    string studentName, grade;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology, percentage;

    cout << "Enter student name : ";
    cin >> studentName;

    marksEnglish = input("English");
    marksMaths = input("Maths");
    marksChemistry = input("Chemistry");
    marksSocialScience = input("Social Science");
    marksBiology = input("Biology");
    percentage = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    grade = calculateGrade(percentage);

    // Output
    displayResult(studentName, percentage, grade);
}

// Function to input Subject Marks
float input(string subject)
{
    float marks;
    cout << "Enter marks for ( 0 - 100 ) " << subject << " : ";
    cin >> marks;

    return marks;
}

// Function to calculate Average of Subjects
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float percentage;

    percentage = ((marksEnglish + marksMaths + marksChemistry + marksBiology + marksSocialScience) / 500) * 100;

    return percentage;
}

// Funciton to find grade
string calculateGrade(float percentage)
{
    if (percentage >= 90 && percentage < 100)
    {
        return "A+";
    }

    else if (percentage >= 80 && percentage < 90)
    {
        return "A";
    }

    else if (percentage >= 70 && percentage < 80)
    {
        return "B+";
    }

    else if (percentage >= 60 && percentage < 70)
    {
        return "B";
    }

    else if (percentage >= 50 && percentage < 60)
    {
        return "C";
    }

    else if (percentage >= 40 && percentage < 50)
    {
        return "D";
    }

    else if (percentage < 40)
    {
        return "F";
    }
}

// Function to display result
void displayResult(string studentName, float percentage, string grade)
{
    cout << "Student Name : " << studentName << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade : " << grade << endl;
}