#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<string>& s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        while(l<r){
            swap(s[l],s[r]);
            l++;r--;
        }
        for(auto it:s){
            cout<<it<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Solution obj;
    vector<string>s = {"H","a","n","n","a","h"};
    obj.reverseString(s);
    return 0;
}