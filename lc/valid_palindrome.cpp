#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for (char c : s) {
            if (isalnum(c)) {
                res.push_back(tolower(c));
            }
        }
        int l = 0;
        int r = res.size() - 1;
        while (l < r) {
            if (res[l] != res[r]) {
                return false; 
            }
            l++;
            r--;
        }
        return true; 
    }
};

int main() {
    Solution obj;
    string s = "race a car";
    bool lp = obj.isPalindrome(s);
    if(lp){
        cout<<"String is valid palindrome"<<endl;
    }else cout<<"String is not valid palindrome"<<endl;
    return 0;
}