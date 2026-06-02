/*
Julian Castaneda
June 1, 2026
Lab 3: numerical variables
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: Numerical variables -----"<<endl;
    int number = 5;
    cout<<"The number is "<<number<<endl;

    double number1 = 3.6190;
    cout<<"The double data type = "<<number1<<endl; 

    float number2 = 3.12090321;
    cout<<"The float data tyoe = "<<number2<<endl;

    cout<<"\n ----- Example 2: Constant variables -----"<<endl;
    number = 23.65;
    cout<<"The updated number is = "<<number<<endl;
    const float EXP = 2.718;
    cout<<"The value of EXP = "<<EXP<<endl;
    
    cout<<"\n ----- Example 3: Calculate the heigh of a fallig object -----"<<endl;
    const float GRAVITY = 9.8;
    float time = 0, height = 0;

    cout<<"Enter the falling time: ";
    cin>>time;

    height = 0.5*GRAVITY*time*time;

    cout<<"The height of a falling object at "<<time<< " is "<<height<<" 2meters"<<endl;

    cout<<"\n ----- Example 4: Calculate the circumference of a circle -----"<<endl;
    const float PI = 3.14159;
    float circumference = 0, radius = 0;
    cout<<"Enter a radius: ";
    cin>>radius;

    circumference = 2*radius*PI;

    cout<<"The circumference is = "<<circumference<<endl;


    cout<<"\n ----- Exercise -----"<<endl;
    const float PIE1 = 3.14159;
    int radius2 = 0;
    float area1 = 0, volume = 0;

    cout<<"Enter the radius of the circle and sphere: ";
    cin>>radius2;

    area1 = PIE1*radius2*radius2;

    volume = (4/3.0)*PIE1*radius2*radius2*radius2;

    cout<<"The area of the circle is: "<<area1<<endl;
    cout<<"The volume of the sphere is: "<<volume<<endl;

    return 0;


}