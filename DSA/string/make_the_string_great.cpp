/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string res = "";
        stack<char>st;
        for(int i=0;i<s.length();i++){
           if (!st.empty() && abs(st.top() - s[i]) == 32) {  
                st.pop(); 
            } else {
                st.push(s[i]); 
            }
        }
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            res.push_back(ch);
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s ="abBAcC";
    string res = obj.makeGood(s);
    cout<<res<<en;
    return 0;
}