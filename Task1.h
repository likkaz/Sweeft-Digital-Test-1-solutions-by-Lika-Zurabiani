#include <iostream>

using namespace std;


// Task 1

bool isPalindrome(string word) {
    string reversed = word;
    reverse(reversed.begin(), reversed.end()); //reversing the entered text

    if (word == reversed) {
        cout << word + " - This word is a Palindrome\n";
        return true;
    }
    else {
        cout << word + " - This word is not a Palindrome\n";
        return false;
    }
}
