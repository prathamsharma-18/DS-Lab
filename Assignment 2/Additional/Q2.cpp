// String Split Challenge
// You are given a string consisting of lowercase English alphabets. Your task is to determine
// if it's possible to split this string into three non-empty parts (substrings) where one of
// these parts is a substring of both remaining parts.
#include <iostream>
#include <unordered_map>
using namespace std;

bool canSplit(string s) {
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

 
    for (auto it : freq) {
        if (it.second >= 3)
            return true;
    }

    return false;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (canSplit(s))
        cout << "Yes, it can be split into three parts with a common substring.\n";
    else
        cout << "No, it cannot be split in such a way.\n";

    return 0;
}
