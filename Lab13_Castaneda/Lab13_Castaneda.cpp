/*
Julian Castaneda
June 10, 2026
Lab 13, functions
*/

#include <iostream>
#include "Lab13_functions.cpp"
using namespace std;
int main(){
    cout<<"\n------- Example 1: void funtions -------\n";
    printhi();
    cout<<"\n------- Example 2: void funtions with parameters -------\n";
    greeting("Julian");
    string user = "Bob";
    greeting(user);
    cout<<"\n ------- EXERCISE -------\n";
    int num;
    int count;

    num = getNumber();

    printNumbers(num);

    count = countNotMultipleOf3(num);

    displayResult(num, count);
    

    return 0;
}
