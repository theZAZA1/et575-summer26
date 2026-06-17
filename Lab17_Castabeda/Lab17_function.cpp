/*
Julian Castaneda
June 17, 2026
Lab 17, array application
*/
#include<iostream>
using namespace std;
// example 1; search application. 
// function to populate. This function only collects positive number
// If a zero or negative number is entered, the collection process will stop.
// numberuserindex stores the index of the last collected positive number.
void filluparray(int *arr, int &numberuserindex, int sizearray){
    int number, index = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if (number>0);{
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < sizearray);

    numberuserindex = index;

    
}
void printelements(int *arr, int &numberuserindex){
    for(int i = 0; i<numberuserindex; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int search(int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while(!found&&(index<numberuserindex)){
        if(targetnumber == arr[index])
            found = true;
        else
            index++;
    }
    if (found)
        return index;
    else
        return -1;
}
//EXAMPLE 2: 2d array
void intro2darray(){
    int graylevel[255][10];
    //declaring 2d array with initial values.
    int temperature[2][5] = {
        {78, 56, 60},
        {100, 89, 92, 90, 80}
    };
    // accessing to a value in a 2d array
    cout<<"The temperature in 1st row, 2nd column"<<temperature[0][1]<<endl;
}