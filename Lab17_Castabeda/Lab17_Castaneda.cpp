/*
Julian Castaneda
June 17, 2026
Lab 17, array application
*/
#include <iostream>
#include "Lab17_function.cpp"
using namespace std;
int main(){
    // declare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] = {0};
    // Declare the variable to save the index of the last positive number
    int listsize;
    //declare the target number
    int targetnumber = 10;

    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number: "<<foundindex<<endl;

    cout<<"\n------- Example 2: 2d array -------\n";
    intro2darray();

    return 0;
}