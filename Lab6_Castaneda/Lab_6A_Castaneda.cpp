#include <iostream>
#include <string>

using namespace std;

int main()
{
    string new_word;

    cout << "------------------------ EXERCISE ------------------------" << endl;

    cout << "Type a word: ";
    cin >> new_word;

    // Print the 4th character
    cout << "The 4th character is: " << new_word[3] << endl;

    // Print length
    cout << "The length of the word is: "
         << new_word.length() << " characters." << endl;

    // Replace 3 characters starting from the 2nd character
    new_word.replace(1, 3, "-- $ --");

    cout << "After replacement: " << new_word << endl;

    // Remove 2 characters from the end
    new_word.erase(new_word.length() - 2, 2);

    cout << "After removing two characters from the end: "
         << new_word << endl;

    cout << "----------------------------------------------------------" << endl;

    return 0;

    /*
    Q1) Was the code correct? Yes it was correct as it was able complete all of the required requirements in the assignment.
    it was able to ask the user for a word, able to display the 4th character, find the length of the word, and removed the last two characters from the word.
    Q2)Was it readable and properly commented? Yes it was readable but it was lightly commented which meant there were very few comments to read through.
    Q3)Were you able to read explain each line of code? I was able to read most of the code. I was able to understand the basic codes we learnt so far such as cin and cout. Other lines i was able to understand were
    replace() and erase().
    Q4)Did it use the same programming concepts we learned in class? It indeed used similar programming concepts we learned in class.
    These concepts include cin, cout, string indexing (new_word[3]), length(), replace(), and erase()
    Q5)------------------------ EXERCISE ------------------------
        Type a word: pridemonth
       The 4th character is: d
        The length of the word is: 10 characters.
        After replacement: p-- $ --emonth
        After removing two characters from the end: p-- $ --emon
    
    */
}