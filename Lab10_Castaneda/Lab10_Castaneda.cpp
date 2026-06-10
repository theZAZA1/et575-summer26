/*
Julian Castaneda 
Lab 10 - Loop mechanics 
June 9, 2026
*/

#include <iostream>
using namespace std;
int main(){
    int x = 3;
    cout<<"\n------- Example 1 -------\n";
    for(int x = 1; x<=5 ; x++){
        cout<<"Hello "<<x<<endl;
    }
    cout<<"End of for loop. Value of x = "<<x<<endl;

    cout<<"\n------- Example 2: for loop as a counter with different steps -------\n";
    for(int i = 1; i<=9 ; i+=2){
        cout<<i<<"\t";
    }

    cout<<"\n\n------- Example 3: For loop as a decrement counter with different steps -------\n";
    for(int p = 10; p>=-10 ; p-=3){
        cout<<p<<"\t";
    }
    cout<<endl;

    cout<<"\n------- Example 4: For loop with conditional statements -------\n";
    int counter = 0;
    int sumpositive = 0;
    for(int w = -20; w<=20 ; w+=4){
        cout<<w<<"\t";
        if(w%5==0 && w!=0)
            counter++;
        if(w>0)
            sumpositive+=w;
    }
    cout<<endl<<"Number of multiples of 5: "<<counter<<endl;
    cout<<"Sum of positive numbers: "<<sumpositive<<endl;

    cout<<"\n------- Example 5: While loop a as a counter  -------\n";
    int o = 1;
    while(o<=5){
        cout<<o<<"\t";
        o++;
    }
    cout<<endl;

    int v = 1;
    while(v++ <=5){
        cout<<v<<"\t";
    }
    cout<<endl;

    v = 1;
    while(++v <=5){
        cout<<v<<"\t";
    }

    cout<<"\n------- Example 6: While loop to validate an input  -------\n";
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;

    while(!(number>=1 && number<=9)){
        cout<<"Enter a new number between 1 and 9: ";
        cin>>number;
    }
    cout<<"Collected number: "<<number<<endl;

    cout<<"\n------- Exercise 1 -------\n";
    int counter1 = 0;
    for(int i = 21; i>=-21 ; i-=5){
        cout<<i<<"\t";
        if(i%2==0)
            counter1++;
    }
    cout<<endl<<"Number of multiples of 2: "<<counter1<<endl;
    cout<<endl;

    cout<<"\n------- Exercise 2 -------\n";
    int spurs;
    cout<<"Enter a starting value: ";
    cin>>spurs;

    for(int q = spurs; q<=30 ; q+=4){
        cout<<q<<"\t";
    }
    cout<<endl;

    return 0;
}