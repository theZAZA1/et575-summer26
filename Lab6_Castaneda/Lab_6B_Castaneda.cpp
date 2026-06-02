#include <iostream>
#include <string>
using namespace std;

int main() {
    // Header
    cout << string(33, '-') << " EXERCISE " << string(33, '-') << endl;

    // Get user input
    string new_word;
    cout << "Type a word: ";
    cin >> new_word;

    // Validate input has at least 4 characters
    if (new_word.length() < 4) {
        cout << "Error: Please enter a word with at least 4 characters." << endl;
        return 1;
    }

    // Print 4th character
    cout << "The 4th character is: " << new_word.at(3) << endl;

    // Print length
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    // Replace 3 characters from index 1 with "-- $ --"
    new_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << new_word << endl;

    // Remove last 2 characters
    new_word.erase(new_word.length() - 2, 2);
    cout << "After removing two characters from the end: " << new_word << endl;

    cout << string(76, '-') << endl;

    return 0;

    /* AI USED WAS CLAUDE AI
    Q1) Was the code correct? Yes, the code was indeed correct althought different than mine. Yet this version was still able to produce the correct output
    that was the same as my original code for lab 5.
    Q2) Was it readable and properly commented? It was readable, and i would also say that it was properly commented compared to the last one we did. 
    This one gave a comment for each of the steps, thought it wasnt long explanations it was still able to give me and maybe other people who are vieweing this a idea of what is going on.
    Q3)Were you able to explain each line of code? I was able to read each line of code as it used the same concepts similar to the previous one we did.
    Q$) Did it use the same programming concepts learned in class? Kinda, parts that i certaintly did not know what it was doing wad during line 7. Other parts that looked totally unfamilliar to me 
    was when it used (if statement) and used string(33, -).
    Q5)
    --------------------------------- EXERCISE ---------------------------------
Type a word: tacotuesday
The 4th character is: o
The length of the word is: 11 characters.
After replacement: t-- $ --tuesday
After removing two characters from the end: t-- $ --tuesd
----------------------------------------------------------------------------
    */



}