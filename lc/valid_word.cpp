#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isValid(string word) {
        string vowels = "aeiou";
        int v_cnt = 0;
        int con_cnt = 0;

        if (word.size() < 3) {
            return false;
        }

        for (char c : word) {
            if (!isalnum(c)) {
                return false; // has invalid char
            }
            if (isalpha(c)) {
                char lower_c = tolower(c);
                if (vowels.find(lower_c) != string::npos) {
                    v_cnt++;
                } else {
                    con_cnt++;
                }
            }
        }

        return v_cnt >= 1 && con_cnt >= 1;
    }
};

