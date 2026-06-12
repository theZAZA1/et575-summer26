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
// example 3: function that returns a value
// returns the double of a number (integer).
// the number is passed to the function as argument
int dbnumber(int n){
    return n * 2;
}

// example 4: function that returns the area of a rectangle
// returning value is a float. area rectangle = width * length
float arearectangle(float width, float length){
    return width * length;
}

// example 5: function that checks if a number is positive, negative, or zero
string checknumber(int number){

    if(number > 0)
        return "positive";

    else if(number < 0)
        return "negative";

    else
        return "zero";
}

// example 6: composition of functions
// function 1: collect and return a positive number
// validate that the number is positive before returning it
int positivenumber(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    // recollect n if n is not a positive number
    while(n <= 0){

        cout << "Error! Enter a positive number: ";
        cin >> n;
    }

    return n;
}

// function 2 calculates the area of a square
int areasquare(int side){

    return side * side;
}

// function 3 print result
void printresult(int area){

    cout << "The area of a square is " << area << endl;

    return;
}

// example 7: function calling function

// function 1: returns the sum of two numbers
int addition(int a, int b){

    return a + b;
}

// function 2: returns the triple of the sum of two numbers
int tripleaddition(){

    return 3 * addition(2, 3);
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