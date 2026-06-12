/*
Julian Castaneda
June 11, 2026
Lab 15, recursive functions, built-in functions
*/
#include <iostream>
#include "Lab15_Functions_castaneda.cpp"
#include <time.h>

using namespace std;
int main(){
    cout<<"\n------- EXAMPLE 1: Recursive function -------\n";
    cheers(3);
    cout<<"\n------- EXAMPLE 2: Recursive function to find the summation of a number -------\n";
    int s = summation(5);
    cout<<s<<endl;
    cout<<"\n------- EXAMPLE 3: use recursive function to validate a number -------\n";
    int num = getPositiveNumber();
    cout<<"Collected number: "<<num<<endl;
    cout<<"\n------- EXAMPLE 4: built-in function -------\n";
    int s1 = getPositiveNumber();
    int s2 = getPositiveNumber();
    float h = hypotenuse(s1, s2);
    printresult(s1, s2, h);
    cout<<"\n----- Example 5: random function -----"<<endl;
    srand(time(0));
    randomnumber();

    cout<<endl;

    randomnumber();
    cout<<"\n----- Example 6: range of random numbers -----"<<endl;
    int r = random_neg5_10();
    cout<<r<<endl;

    cout<<"\n-------- EXERCISE A ---------\n";
    srand(time(0));
    int time=randomnumero();
    float distance=fallingdistance(time);
    printresult(time, distance);
    
    



    
    return 0;
}