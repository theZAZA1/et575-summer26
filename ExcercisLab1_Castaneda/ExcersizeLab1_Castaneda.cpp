/*
Julian Castaneda
May 28th, 2026
Lab 1 excercise
*/

#include<iostream>

using namespace std;

int main(){
    
    string country;
    cout<<"Enter a Country: ";
    cin>> country;

    char gender;
    cout<<"Enter a gender (F for female, M for male, O for other): ";
    cin>> gender;

    cout<< "\nEntered country:\t"<<country<<endl;
    cout<< "Selected gender\t"<<gender<<endl;

    return 0;

}