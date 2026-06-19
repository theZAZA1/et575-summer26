/*
Julian Castaneda
June 17 and 18, 2026
Lab 18, console failure and file streaming
*/
#include <iostream>
using namespace std;

void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(cin.fail())
        cout<<"Error! Dismatched data type!"<<endl;
    else
        cout<<"Entered number = "<<num<<endl;
    //reset the cin status
    cin.clear();
    cin.ignore(10000, '\n');
    cout<<"--- END OF FUNCTION ---"<<endl;
}
//EXAMPLE 2
float validatenumber(){
    float n;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        if(!(cin>>n)){
            cout<<"Invalid data type!"<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            return n;
        }
    }while(true);
}
// Example 3: Input and Output files.
#include<fstream>
void iofiles(){
    ifstream fin;
    ofstream fout;
    fin.open("samplefile.txt");
    string line;
    int linecounter = 1;
    while(getline(fin, line)){
        cout<<"Line "<<linecounter<<" = \t"<<line<<endl;
        linecounter++;
    }
    //close the file
    fin.close();
}
// Example 4: Write file
void writefile(){
    ofstream fout;
    fout.open("outputfile.txt");
    // To write in a file, we use the output file object fout.
    fout<<"Good Morning!"<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    fout<<"End of file"<<endl;
    fout.close();

}
// Example 5: Appending Data.
// fout.open() we need to add the argument ios::app
void appendfile(string filename){
    ofstream fout;
    fout.open(filename, ios::app);
    fout<<"Julian Castaneda"<<endl;
    fout.close();
}
float calculator(float num1, float num2){
    char op;
    do{
        cout<<"Enter a operation (+, -, *, /, or %): ";
        cin>>op;
        if (cin.fail()){
            cout<<"Invalid symbol!!!"<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if(op == '+' || op == '-' || op == '*'|| op =='/'|| op =='%'){
            if(op=='+')
                return num1 + num2;
            else if(op=='-')
                return num1 - num2;
            else if(op=='*')
                return num1 * num2;
            else if(op=='/')
                return num1 / num2;
            else
                return(int)num1 % (int)num2;
        }
        else{
            cout<<"Invalid symbol!!!"<<endl;
        }
    }while(true);
}
void createdatafile(){
    ofstream fout;
    fout.open("data_user.txt");
    fout<<"This is my output file - Julian Castaneda"<<endl;
    fout.close();
}
void appendeddatafile(string message){
    ofstream fout;
    fout.open("data_user.txt", ios::app);
    fout<<message<<endl;
    fout.close();

}
void overwritefile(string filename, string text){
    ofstream fout;
    fout.open(filename);
    fout<<text<<endl;
    fout.close();
}