#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: bool variable"<<endl;
    int  n;
    bool checkpositive;
    cout<<"Entr a number: ";
    cin>>n;
    checkpositive = n > 0;
    cout<<"Is number "<<n<<" positve?"<<checkpositive<<endl;
    checkpositive = 5;
    cout<<"Updated checkpositive = "<<checkpositive<<endl;

    cout<<"\n ----- Example 2: If statement -----"<<endl;
    int c = 10;
    if(n == 0){
        cout<<"n is zero!";
        c += 20;
    }
    cout<<"\t Updated c = "<<c<<endl;

    cout<<"\n ----- Example :3 If/Else statement -----"<<endl;
    if(n%2 == 0){
        cout<<n<<" is an EVEN number!"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }

    cout<<"\n ----- Example :4 If/Else statement -----"<<endl;
    int wavelength = 0;
    string emittedlight = "";

    // update wavelength
    cout<<"Enter a wavelength: ";
    cin>>wavelength;

    if (wavelength < 379 && wavelength >= 10) {
    emittedlight = "ULTRAVIOLET";
}
else if (wavelength < 520 && wavelength >= 380) {
    emittedlight = "BLUE";
}
else if (wavelength < 590 && wavelength >= 521) {
    emittedlight = "GREEN";
}
else if (wavelength < 740 && wavelength >= 591) {
    emittedlight = "RED";
}
else if (wavelength >= 741) {
    emittedlight = "INFRARED";
}
else {emittedlight = "UNDEFINED"; }

cout<<wavelength<<" nm emits "<<emittedlight<<" light"<<endl;

cout<<"\n ----- Example 5: Conditional operator -----"<<endl;
if(n%2 == 0){
    cout<<n<<" is an EVEN number"<<endl;
}
else{
    cout<<n<< "is an ODD number"<<endl;
}

cout<<"\n ----- Example 6: Conditional operator -----"<<endl;
int max = 10;
bool checkmax = false;

if(n>max){checkmax = true;}
else{checkmax = false;}

checkmax = n>max ? true : false;

cout<<"Is n greater than 10? = "<<checkmax<<endl;


//checkmax = n > max ? true : false;

//cout<<"Is n greater than 10? = "<<checkmax<<endl;

//cout<<((n>10) ? "n is greater than 10" : "n is not greater than 10");

/*cout<<"\n ----- Example 7: Nested condition statements -----"<<endl;
if(n>0 && n%2 ==0){
    cout<<"positive and even number"<<endl;
}
else if(n>0 && n%2 !=0){
    cout<<"positve and odd number"<<endl;
}
else if(n<0 && n%2 ==0){
    cout<<"negative and even number"<<endl;
}
else if(n<0 && n%2 ==0){
    cout<<"negative and odd numnber"<<endl;
}
else{
    cout<<"zero"<<endl;*/

if(n<0){
    if(n%2==0)
        cout<<"positive and even number"<<endl;
    else
        cout<<"positive and odd numnber"<<endl;

}
else if(n<0){
    if(n%2 ==0)
        cout<<"negative and even number"<<endl;
    else
        cout<<"negative and odd number"<<endl;

}
else{
    cout<<"zero"<<endl;
}

cout<<"-------- Exercise ---------"<<endl;
float weight = 0.0;
float shippingcost = 0.0;

cout<<"Enter package weight in pounds: ";
cin>>weight;

cout<<"------- Shipping cost calculator -------"<<endl;

if(weight <=0){
    shippingcost = 0.0;
}
else if(weight <=2){
    shippingcost = 5.00;
}
else if(weight <=5){
    shippingcost = 8.20;
}
else if(weight <=10){
    shippingcost = 10.25;
}
else{
    shippingcost = 12.50;
}
cout<<"A package of weight "<<weight<<" costs $"<<shippingcost <<endl;


return 0;
}
