#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// A word is considered valid if:

// It contains a minimum of 3 characters.
// It contains only digits (0-9), and English letters (uppercase and lowercase).
// It includes at least one vowel.
// It includes at least one consonant.
// You are given a string word.

// Return true if word is valid, otherwise, return false.

// Notes:

// 'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
// A consonant is an English letter that is not a vowel.


class Solution{
    public:
    bool isValid(string word) {
        bool op = true;
        if(word.size()<3){
            op = false;
        }
    }
};

int main() {
    Solution obj;
    string s;
    bool ok = obj.isValid(s);
    
    if(ok){
        cout<<"true"<<endl;
    }
    else 
     cout<<"false"<<endl;

     return 0;
}