/*
Julian Castaneda
June 3, 2026
Lab 8: Getting help from AI to build a temperature converter.
*/
#include <iostream>
#include <string> //Added as it is needed for string type
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32;
}

int main() {
    double celsius;
    double temp; //added for storing temperature input
    int choice; //added to store the users selection
    double output; //added to store converted results

    cout << "===== Temperature Converter =====" << endl;
    //ALL OF THE 4 ADDED COUTS WERE NEWLY ADDED.
    cout<<"1: Celcius to fahrenheit"<<endl;
    cout<<"2: Fahrenheit to celcius"<<endl;  
    cout<<"3: Celcius to kelvin"<<endl;
    cout<<"4: Fahrenheint to kelvin"<<endl;
    cout<<"Enter choice: ";
    cin>>choice; // IS A NEWLY ADDITION TO THE CODE.


    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if(choice == 1){
        output = (1.8 * temp)+32;
        cout<<temp<<"C is"<<output<<"F"<<endl;
    }
    else if(choice ==2){
        output = (5.0/9.0)*(temp -32);
        cout<<temp<<"F is"<<output<< " C"<<endl;
    }
    else if(choice ==3){
        output = temp +273.15;
        cout<<temp<<" C is "<<output<<"K"<<endl;
    }
    else if(choice ==4){
        output = (temp-32)*(5.0/9.0)+273.15;
        cout<<temp<<" F is"<<output<<"K"<<endl;
    }
    else{
        cout<<"Invalid choice."<<endl;
    }

    return 0;

/*
1. Does the AI code use C++ concepts you're unfamiliar with? Explain.) The AI does used C++ concepts that i am unfamilliar with. For example it used concept such as celciustoFahrenheint()
which we have never touched in class.
2. Are there any issues or improvements you noticed? Explain.) I feel like the issues ive been experiencing is that AI uses concepts that we havent touched in class. 
This can confuse me as i wonder how it works.
3. What methods did you use to test if the AI code was working as it should? Explain.) The methods i used to test if the AI code was working as it should have been was testing if each of the 4 menus were working. For example
i would enter 2 which was (fahrenheint to celcius) and i entered in the temperature to celcius. I would the type in 77 and it would convert it to celcius.





*/


}