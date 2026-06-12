#include <iostream>
using namespace std;

int main()
{

    // QUESTION 3
    int n = 10;
    cout<<"Enter a number: ";
    cin>>n;
    string answer =" ";

    if(n%3==0 && n!=0){

        if(n>0){
            answer = "positive multiple of 3";
        }
        else{
            answer = "negative multiple of 3";
        }
        /*  inner conditional statement: write a conditional statement for if: 
            -the number is multiple of 3 and positive, set variable 'answer' to 'positive multiple of 3'
            -on the other hand, set variable 'answer' to 'negative multiple of 3'
        */
    }
    else{
        cout<<"zero"<<endl;
    }
    cout<<answer<<endl;

    }