#include<iostream>
using namespace std;

int inputMarks()
{
    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    while(mark < 0 || mark > 100)
    {
        cout << "Invalid mark. Enter again: ";
        cin >> mark;
    }

    return mark;
}

int totalMarks(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}

float calculatePercentage(int m1, int m2, int m3)
{
    int total;

    total = totalMarks(m1, m2, m3);

    return (total / 300.0) * 100;
}

char determineGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 80)
        return 'B';
    else if(percentage >= 70)
        return 'C';
    else if(percentage >= 60)
        return 'D';
    else
        return 'F';
}

void displayResult(int m1, int m2, int m3, char grade)
{
    cout << "With marks " << m1 << ", " << m2 << ", " << m3
         << ", the GRADE is " << grade << endl;
}