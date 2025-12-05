/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string res ;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
               if(!st.empty()){
                st.pop();
               }
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());  // reverse returns no value
        return res;

        // other method 
//         string removeStars(string s) {
//     string res = "";
//     for (char c : s) {
//         if (c == '*') {
//             // "Pop" from string
//             if (!res.empty()) res.pop_back();
//         } else {
//             // "Push" to string
//             res.push_back(c);
//         }
//     }
//     return res;
// }
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s= "erase*****";
    string op = obj.removeStars(s);
    cout<<op<<en;
    return 0;
}