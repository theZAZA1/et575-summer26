/*
Julian Castaneda
June 10, 2026
Lab 13, functions
*/

#include <iostream>
using namespace std;
void printhi(){
    cout<<"Hello Functions!"<<endl;
    return;
}
void greeting(string username){
    cout<<"Good morning, "<<username<<"!"<<endl;
    return;
}
//Example 3
int dbnumber(int n){
    return n*2;
}

//EXERCISE
int getNumber(){
    int num;

    cout<<"Enter a number between 1 and 10: ";
    cin>>num;

    while(num<1 ||num>10){
        cout<<"Invalid. Enter a number between 1 and 10: ";
        cin>>num;
    }

    return num;
}
void printNumbers(int num){
    for(int i = num; i <= 15; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int countNotMultipleOf3(int num){
    int count = 0;

    for(int i = num; i <= 15; i++){
        if(i % 3 != 0){
            count++;
        }
    }

    return count;
}
void displayResult(int num, int count){
    cout << "From " << num << " up to 15, there are " << count << " number/s that are not multiplied by 3." << endl;
}