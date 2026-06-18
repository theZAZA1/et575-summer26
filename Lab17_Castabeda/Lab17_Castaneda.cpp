/*
Julian Castaneda
June 17, 2026
Lab 17, array application
*/
#include <iostream>
#include "Lab17_function.cpp"
using namespace std;
int main(){
    // declare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] = {0};
    // Declare the variable to save the index of the last positive number
    int listsize;
    //declare the target number
    int targetnumber = 10;

    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number: "<<foundindex<<endl;

    cout<<"\n------- Example 2: 2d array -------\n";
    intro2darray();

    cout<<"\n------- Example 3: Print 2d array elements -------\n";
    const int rowsize = 2;
    int n[rowsize][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printarray(n, rowsize);

    cout<<"\n------- Example 4: 2d array application -------\n";
    const int students = 3;
    const int subjects = 4;
    int grades[students][subjects] = {
        {85, 90, 78, 92},
        {70, 88, 84, 76},
        {95, 91, 89, 93}
    };
    int studentavg[students];
    studentaverage(grades, students, subjects, studentavg);
    printavg(studentavg, students);

    cout<<"\n------- EXERCISE A --------\n";
    const int size = 5;
    int arr[size] = {12, 8, 25, 3, 17};
    int minNumber = findMin(arr, size);
    cout<<"The minimum number is "<<minNumber<<endl;

    cout<<"\n------- EXERCISE B -------\n";
    const int array_size = 5;
    int arrayNumber2D[array_size][array_size] = {0};
    int max = 200;
    int min = 150;
    popArray2D(arrayNumber2D);
    cout<<"\narrays\n";
    printarray2D(arrayNumber2D);
    int totalNumber = range2D(arrayNumber2D, min, max);
    cout<<"\nArray has "<<totalNumber<<" number(s) between "<<min<<" and "<<max<<endl;
    return 0;
}