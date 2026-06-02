/*
Julian Castaneda
June 1, 2026
Lab 4: numerical operators
*/

#include <iostream>

using namespace std;

int main(){

    cout<<"\n---- Example 1: Assignment operator ----"<<endl;
    int n = 9, m = 2;
    cout<<"n = "<<n<<endl;
    // add 1 to n and update the value
    n++;
    cout<<"updated n = "<<n<<endl;
    //subtract 1 from m and update the value
    m--;
    cout<<"Updated m = "<<m<<endl;

    //add m value into n and update value of n
    n+= m;
    cout<<"Updated n = "<<n<<endl;

    // Triple the value of m and update m
    m *=3 ; // m = m*3;
    cout<<"Updated m = "<<m<<endl;

    //modulus: Find and return the remainder of a division
    cout<<"Modulus, Remainder = "<<n%m<<endl;
    cout<<"n = "<<n<<endl;
    n %= m;
    cout<<"n = "<<n<<endl;

    cout<<"\n----- Example 2: comparison operators"<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"Are n and m equal?    "<<(n==m)<<endl;
    cout<<"Is n not equal top M?    "<<(n != m)<<endl;
    cout<<"Is m greater than or equal to n?  "<<(m >= n)<<endl;

    cout<<"\n----- Example 3: Logical/boolean operators"<<endl;
    bool check1 = m < n;
    bool check2 = n <= m;
    bool check3 = m != n;

    cout<<"check1 = "<<check1<<endl;
    cout<<"check2 = "<<check2<<endl;
    cout<<"check3 = "<<check3<<endl;

    bool result1 = check1 && check2 && check3;
    bool result2 = check1 || check2 || check3;
    bool result3 = ! check2;

    cout<<"result 1 = "<<result1<<endl;
    cout<<"result 2 = "<<result2<<endl;
    cout<<"result 3 = "<<result3<<endl;


    cout<<"\n----- EXCERCISE -----"<<endl;
    
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    char character;
    cout<<"Enter a character: ";
    cin>> character;

    number *= 3;
    character %= 60;

    bool isLessorequal = number <= character;
    bool logicalresult = (number <= -1) || (character != 5);
    bool isbetween = (character >= -2) && (character <= 2);

    cout<<"1. Triple the number:\t"<<number<<endl;
    cout<<"2. Remainder of character:\t"<<character<<endl;
    cout<<"3. Is number less than or equal to character?:\t"<<isLessorequal<<endl;
    cout<<"4. Result after comparison:\t"<<logicalresult<<endl;
    cout<<"5. Is number between -2 and 2?:\t"<<isbetween<<endl;





    

    return 0;
}
