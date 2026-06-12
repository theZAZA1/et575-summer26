#include <iostream>
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
        return 0;
    }
}