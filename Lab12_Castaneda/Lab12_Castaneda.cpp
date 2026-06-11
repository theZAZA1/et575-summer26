/*
Julian Castaneda
June 10, 2026
Lab 12, nested loops
*/

using namespace std;
#include <iostream>
int main(){
    cout<<"\n------- Example 1: Nested for loops to print a pattern -------\n";
    int i = 0;
    while(i++ <3){
        cout<<"OUTER loop = "<<i<<endl;

        cout<<"\t\t INNER loop: "<<endl;
        int j = 0;
        while(j++ <5){
            cout<<" j = "<<j<<endl;
        }
    }

    cout<<"\n------- Example 2: Nested for loops -------\n";
    int row=0, seat=0;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of seats per row: ";
    cin>>seat;
    for(int r = 1; r <= row; r++){
        for(int c =1; c <= seat; c++){
            cout<<"Row "<<r<<" Seat "<<c<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n------- Example 3: Graphing using nested loops -------\n";
    const int GRAPHSIZE = 9;
    for(int row = 1; row <= GRAPHSIZE; row++){
        for(int col = 1; col <= GRAPHSIZE; col++){
            if(col==5   || row==5)
                cout<<" x ";
            else
            cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n------- Example 4: Graphing using nested loops -------\n";
    int dimension = 10;
    for(int row = 1; row <= dimension; row++){
        for(int col = 1; col<=dimension; col++){
            if( (row>=3 && row<=8) && (col>=3 && col<=4) ||
                (row>=5 && row<=5) && (col>=5 && col<=6) ||
                (row>=3 && row<=7) && (col>=7 && col<=8)
        )
                cout<<" %";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    cout<<"\n------ Lab Exercise A ------\n";

const int GUESS=5;
int num;

cout<<"Guess a number between 1 and 10: ";
cin>>num;

while(num<1||num>10)
{
    cout<<"Invalid input. Enter a number between 1 and 10: ";
    cin>>num;
}

while(num!=GUESS)
{
    if(num>GUESS)
        cout<<"The entered number is high.\n";
    else
        cout<<"The entered number is low.\n";

    cout<<"Try again: ";
    cin>>num;

    while(num<1||num>10)
    {
        cout<<"Invalid input. Enter a number between 1 and 10: ";
        cin>>num;
    }
}

cout<<"Correct! You guessed the number.\n";

cout<<"\n------ Lab Exercise B ------\n";

const int SIZE=10;

for(int row=1;row<=SIZE;row++)
{
    for(int col=1;col<=SIZE;col++)
    {
        if(((row>=3&&row<=8)&&(col>=3&&col<=4))||
           ((row>=3&&row<=8)&&(col>=7&&col<=8))||
           ((row>=7&&row<=10)&&(col>=5&&col<=6)))
        {
            cout<<"% ";
        }
        else
        {
            cout<<". ";
        }
    }

    cout<<endl;
}
    return 0;
}

