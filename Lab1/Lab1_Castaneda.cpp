/*
Julian Castaneda
May 28, 2026
lab 1: iostream
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ------ Example 1: Cout object ------"<<endl;
    cout<<"Hello World!"<<endl;
    cout<<"ET575 \t Student's full name"<<endl;
    cout<<"\n ------ Example 2: Declaring string and character variables ------"<<endl;

    /*
    Variables are onlt declared once
    - Naming variables:
        - Can't start with a number
        - Can't have space in between
        - Can't have any symbol except the _
    A virable name is known as a "Identifier"

    */
   string username;
   username = "Peter Pan";
   cout<<"Username = "<<username<<endl;
   cout<<"Enter another username: ";
   cin>>username;
   cout<<"Updated username: "<<username<<endl;
   cout<<"\n ------ Example 3: Declaring character variables ------"<<endl;
   char symbol = '%';
   cout<<"Character: "<<symbol<<endl;
   symbol = 38;
   cout<<"Updated character: "<<symbol<<endl;

   cout<<"------ EXCERCISE ------"<<endl;

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
