/*
Julian Castaneda
June 9, 2026
Lab 11 - Do while loop, nested loops.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"\n------- Example 1: Do while loop -------\n";
    // Do block --> Check if a number is even or odd
    // while block --> Will run if the user wants another by typing 'y'or 'Y'
    int num;
    char choice;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num%2==0 && num != 0){
            cout<<"Even number"<<endl;
        }
        else if(num==0){
            cout<<"Number is zero"<<endl;
        }
        else{
            cout<<"Number is odd"<<endl;
        }

        cout<<"Do you want to enter another run?";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');
    cout<<"End of program. "<<endl;

    cout<<"\n------- Example 2:loop with a break statement -------\n";
    int sumnumbers = 0;
    int n;
    while(true){
        cout<<"Enter a postive number: ";
        cin>>n;
        if(n<0){
            sumnumbers += n;
    }
    else{
        break; //ends the loop if the user enters a positive number
    }

 }
    cout<<"End of loop. Total sum is: "<<sumnumbers<<endl;

    cout<<"\n------- Example 3: Loop with a continue statement -------\n";
    int sumall = 0;
    for(int m =1; m<=9; m++){
        cout<<m<<"\t";
        if(m==5){
            continue; //skips the rest of the loop when m is 5 and goes to the next iteration
        }
        sumall += m;
    }
    cout<<endl<<"Total sum is: "<<sumall<<endl;

    cout<<"\n------- Example 4: Loop with conditioned statements -------\n";
    int count = 0;
    int i = 10;

    while(i>5){
        i--;
        if(i%2==0){
            count+=i;
            continue;
    }
    count -=3;
}
    cout<<"Final count is: "<<count<<endl;
    /* Table to analyze the flow of a loop with conditional stament
    loop iteration | while(i>5) | i--  | if (i%2==0)    | count += i   | count -= 3   |
    -----------------------------------------------------------------------------------
            1      | while(10>5)| 10-1 = 9 | if(9%2 == 0)|skipped      | Count =0+3=3 |
                   | True       |          | False      |              |              |
                   
            2      |while(9>5)  | 9-1 = 8  | if(8%2 == 0)| count = 3+8=11|skipped      |
                   | True       | i=8      | True       |  count = 5b    |because of continue
                   
            3      |while(8>5)  | 8-1 = 7  | if(7%2 == 0)|skipped      | count =5-3=2 |
                   | True       | i=7      | False      |              |              |
            4      |while(7>5)  | 7-1 = 6  | if(6%2 == 0)| count = 2+6=8|skipped      |
                   | True       | i=6      | True       | count = 8     |
            5      |while(6>5)  | 6-1 = 5  | if(5%2 == 0)|skipped      | count =8-3=5 |
                   | True       | i=5      | False      |              |              |
            6      |while(5>5)  |          |              |              |
                   | False      |          |              |              |
            
            */
    return 0;
}