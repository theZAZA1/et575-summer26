#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void cheers(int n){
    if(n==1){
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
    /*
    function | int n | if(n==1) | else
    iteration|       |          | cout<<(n*2) | cheers(n-1)
    1        | n=3   | false    |cout<<(n*2)=6| cheers(3-1=2)
    2        | n=2   | false    |cout<<(n*2)=4| cheers(2-1=1)
    3        | n=1   | true     |             | STOP
    */
}

// EXAMPLE 2: recursive function to find the summation of a number
// for example, summation of 3, 3+2+1+0
int summation(int n){
    if(n!=0){
        return(summation(n-1)+n);
    }
    else{
        return 0;
    }
}

//example 3: use recursive function to validate a number
//use recursive case to recollect a number if it is not positive
int getPositiveNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    //base case
    if(num>0){
        return num;
    }
    //recursive case
    else{
        cout<<"Invalid input. Please enter a positive number."<<endl;
        return getPositiveNumber();
    }
}
#include <cmath>

float hypotenuse(int side1, int side2){

    return sqrt(pow(side1,2)+pow(side2,2));
}

// function to print result
void printresult(int side1, int side2, float hyp){

    cout<<"The hypotenuse of a right triangle with sides "
        <<side1<<" and "<<side2<<" is "<<hyp<<endl;

    return;
}
// example 5: random numbers

#include <cstdlib>
#include <time.h>

void randomnumber(){

    srand(time(0));

    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
}
// example 6: random number between -5 and 10, inclusive
int random_neg5_10(){
    srand(time(0));
    return(-5+rand()%16);
}
//EXERCISE
const float gravity =9.8;
int randomnumero(){
    return rand()%100+1;
}
float fallingdistance(int time){
    return 0.5*gravity*pow(time, 2);
}
void printresult(int time, float distance){
    cout<<"The falling distance in "<<time<<" seconds is "<<distance<<" meters."<<endl;
}


