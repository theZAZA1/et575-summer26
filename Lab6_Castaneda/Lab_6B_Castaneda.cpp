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
}