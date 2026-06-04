#include <iostream>
using namespace std;

int main(){
    cout<<"\n------- Example 1: Switch-case statement -------"<<endl;
    int dayoff=0;

    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;

    cin>>dayoff;

    switch (dayoff){
        case 1:
            cout<<"You are off Monday"<<endl;
            break;
        case 2:
            cout<<"You are off Tuesday"<<endl;
            break;
        case 3:
            cout<<"You are off Wednesday"<<endl;
            break;
        case 4:
            cout<<"You are off thursday"<<endl;
            break;
        case 5:
            cout<<"You are off Friday"<<endl;
             break;
        default:
            cout<<"Wrong dayoff!"<<endl;
            break;
    }


    cout<<"------- Example 2: Select a gender -------"<<endl;
    char gender;
    string selectedgender = "";
    //collect the gender
    cout<<"Select the gender: "<<endl;
    cout<<"m for male"<<endl;
    cout<<"f for female"<<endl;
    cout<<"o for other"<<endl;
    cin>>gender;

    switch (gender){
        case 'm' : case 'M':
            selectedgender = "MALE";
            break;
        case 'f' : case 'F':
            selectedgender = "FEMALE";
            break;
        case 'o' : case 'O':
            selectedgender = "OTHER";
        default:
            selectedgender = "UNKNOWN";
            break;

    
    }
    //print result
    cout<<"Selected gender is: "<<selectedgender<<endl;

    cout<<"\n ------- EXERCISE -------"<<endl;
    int number = 0;
    char choice;

    cout<<"Enter a number: ";
    cin>>number;

    cout<<"Do you want to double the number? Y/y for yes, N/n for no: "<<endl;
    cin>>choice;

    switch(choice){
        case 'Y' : case 'y':
            number *=2;
            break;
        case 'N' : case 'n':
            break;
        default:
            number = 0;
            break;
    
    
    }
    cout<<"The number is set to: "<<number<<endl;


    return 0;

}