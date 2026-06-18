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
        if (number>0){
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
//EXAMPLE 3: Print each value in a 2d array.
// The size of the column HAS to be passed in a 2d array.
// int arr[][3] --> int(*arr)[3]
void printarray(int arr[][3], int rows){
    for(int r = 0; r<rows; r++){
        for(int c = 0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}
// Example 4; 2d array application
// Function to find and return the average of students grade
// 2d set up : row --> student, column --> subjects.
// 2d array of 3 students and 4 subjects per student
void studentaverage(int (*arr)[4], int sizestudents, int sizesubjects, int *avg){
    int index = 0;
    for(int r = 0; r<sizestudents; r++){
        int sum = 0;
        for(int c = 0; c<sizesubjects; c++){
            sum += arr[r][c];
        }
        //cout<<"Student "<<r+1<<" Average grade "<<(sum/sizesubjects)<<endl;
        avg[index] = sum/sizesubjects;
        index++;
    }
}
//function to prin the average of each student
void printavg(int *avg, int sizestudents){
    for(int i=0; i<sizestudents; i++){
        cout<<"Student "<<i+1<<" average grade = "<<avg[i]<<endl;
    }
}
//EXERCISE A
int findMin(int *arr, int size){
    int min = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}
// EXERCISE B
void popArray2D(int(*arr)[5]){
    for(int r = 0; r<5; r++){
        for(int c = 0; c<5; c++){
            arr[r][c] = rand()%255+1;
        
        }
    }
}
void printarray2D(int(*arr)[5]){
    for(int r = 0; r<5; r++){
        for(int c = 0; c<5; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}
int range2D(int (*arr)[5], int min, int max){
    int count = 0;
    for(int r = 0; r<5; r++){
        for(int c = 0; c<5; c++){
            if(arr[r][c] >= min && arr[r][c]<= max)
                count++;
        }
    }
    return count;
}