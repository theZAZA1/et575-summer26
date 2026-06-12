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
    cout<<"\n----- example 3: function that returns a value -----"<<endl;

    int x=dbnumber(6);
    cout<<x<<endl;


    cout<<"\n----- example 4: function that returns the area of a rectangle -----"<<endl;

    float a=arearectangle(2.5, 2);
    cout<<"Area rectangle = "<<a<<endl;


    cout<<"\n----- example 5: function with alternative return value -----"<<endl;

    string r=checknumber(0);
    cout<<r<<endl;


    cout<<"\n----- example 6: composition of functions -----"<<endl;

    int side=positivenumber();
    int asquare=areasquare(side);
    printresult(asquare);


    cout<<"\n----- example 7: function calling function -----"<<endl;

    cout<<tripleaddition();
    
    cout<<"\n ------- EXERCISE -------\n";
    int num;
    int count;

    num = getNumber();

    printNumbers(num);

    count = countNotMultipleOf3(num);

    displayResult(num, count);
    

    return 0;
}
