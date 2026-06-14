/*
Julian Castaneda
June 14, 2026
Homework 2
*/
#include <iostream>
using namespace std;
int dimension=10;
int main(){
    int num;
    do{
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>num;

        if(num<10)
        cout<<num<<" is invalid. Enter a number greater that is equal or greater"<<endl;
    }
    while(num<10);
    cout<<num<<" is a valid number!"<<endl;

    cout<<"\n-------- EXERCISE 2 ---------\n";
    int n1;
    int n2;
    int min;
    int max;

    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
    if(n1<n2){
        min=n1;
        max=n2;
    }
    else{
        min=n2;
        max=n1;
    }
    cout<<"RESULT = ";
    while(min<=max){
        cout<<min<<" ";
        min++;
    }
    cout<<"\n--------- EXERCISE 3 ----------\n";
    for(int row=1; row<dimension;row++){
        for(int col=1; col<=dimension; col++){
            if((row>=3 && row<=4)&&(col>=4 && col<=5) ||
            (row>=3 && row<=4) && (col>=7 && col<=8) ||
            (row>=5 && row<=6) && (col>=3 && col<=8) ||
            (row>=7 && row<=7) && (col>=4 && col<=7) ||
            (row>=8 && row<=8) && (col>=5 && col<=6)) 
            cout<<"%";
        else
            cout<<".";                    
        }
        cout<<endl;

    }
    return 0;

    }
