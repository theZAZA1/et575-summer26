/*
Julian Castaneda
June 2, 2026
Lab 5: string methods
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n------ Example 1: String indexing ------"<<endl;
    string username = "peterpan123";
    cout<<"The fourth character of username = "<<username[3]<<endl;
    cout<<"The sixth character of username = "<<username.at(5)<<endl;

    cout<<"\n------ Example 2: Length of a string ------"<<endl;
    int num_username = username.length();
    cout<<"There are "<<num_username<<" character in username. "<<endl;

    cout<<"\n------ Example 3: Adding string ------"<<endl;
    string n = "Never";
    string o = " Say ";
    string m = " Never ";
    cout<<n + o + m<<endl;
    cout<<"\n------ Example 4: Subtracting character from a string ------"<<endl;
    cout<<"Extracted word = "<<n.substr(1,4)<<endl;
    cout<<"\n------ Example 5: Inserting characters/s into a string ------"<<endl;
    cout<<username<<endl;
    username.insert(5,"LAND"); //Automatically update the string value
    cout<<username<<endl;
    cout<<"\n------ Example 6: Add character/s from a string ------"<<endl;
    username.append("Pizza");
    cout<<username<<endl;
    cout<<"\n------ Example 7: Replacing characters from a string ------"<<endl;
    string name = "Peter Pan";
    cout<<name<<endl;
    name.replace(1, 4, "Atrick");
    cout<<name<<endl;
    cout<<"\n------ Example 8: Erasing characters from a string ------"<<endl;
    name.erase(9, 2);
    cout<<name<<endl;
    cout<<"\n------ Example 9: Find the index of character in a string ------"<<endl;
    cout<<username<<endl;
    int index_r = username.find("r");
    cout<<"Index of letter r = " <<index_r<<endl;
    cout<<"\n------ Example 10: Combine methods ------"<<endl;
    cout<<username<<endl;
    cout<<m<<endl;
    int index123 = username.find("123");
    cout<<index123<<endl;
    username.insert(index123, m);
    cout<<username<<endl;

    cout<<"------- EXERCISE -------"<<endl;
    string wordd;
    cout<<"Type a word: ";
    cin>>wordd;
    cout<<"The fourth character is: "<<wordd[3]<<endl;
    int word_length = wordd.length();
    cout<<"The length of the word is: "<<word_length<<" characters."<<endl;
    wordd.replace(1, 3, "-- $ --");
    cout<<"After replacement: "<<wordd<<endl;
    wordd.erase(wordd.length() - 2, 2);
    cout<<"After removing two characters from the end: "<<wordd<<endl;
    cout<<"------------------------------"<<endl;
        

    return 0;


    /*cout<<"----- Practice exam 1 ------"<<endl;
    string password = "peterpan123";
    int a = password.length();
    int b = a- 2; //9
    password.replace(b, 3, "NONE");
    */
}