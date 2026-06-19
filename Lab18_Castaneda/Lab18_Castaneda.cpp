/*
Julian Castaneda
June 17 and 18, 2026
Lab 18, console failure and file streaming
*/
#include <iostream>
#include "Lab18_functions.cpp"
using namespace std;
int main(){
    cout<<"\n------- Example 1: Console failure test -------\n";
    checknumber();

    cout<<"\n------- Example 2: Console failure test -------\n";
    float n = validatenumber();
    cout<<n<<endl;

    
    cout<<"\n------- Example 3: Read file --------\n";
    iofiles();

    cout<<"\n------- Example 4: Write file -------\n";
    writefile();

    cout<<"\n------- Example 5: Append data into a file -------\n";
    string filename = "outputfile.txt";
    appendfile(filename);

    cout<<"\n------- EXERCISE A -------\n";
    float answer = calculator(10, 5);
    cout<<"Result = "<<answer<<endl;

    cout<<"\n------- EXERCISE B -------\n";
    createdatafile();
    appendeddatafile("This text was appended.");
    overwritefile("newfile.txt", "This file was overwritten.");
    return 0;
}
