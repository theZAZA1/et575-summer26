#include<iostream>
#include "Lab14_functions_castaneda.cpp"
using namespace std;

// Function prototypes
int inputMarks();
int totalMarks(int m1,int m2,int m3);
float calculatePercentage(int m1,int m2,int m3);
char determineGrade(float percentage);
void displayResult(int m1,int m2,int m3,char grade);

int main()
{
    int m1,m2,m3;
    float percentage;
    char grade;

    m1=inputMarks();
    m2=inputMarks();
    m3=inputMarks();

    percentage=calculatePercentage(m1,m2,m3);

    grade=determineGrade(percentage);

    cout<<"Percentage: "<<percentage<<"%"<<endl;

    displayResult(m1,m2,m3,grade);

    return 0;
}