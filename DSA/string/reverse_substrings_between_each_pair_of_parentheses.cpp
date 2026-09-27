/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string curr="";
        for(char ch:s){
            if(ch=='('){
                st.push(curr);
                curr="";
            }
            else if(ch==')'){
                reverse(curr.begin(),curr.end());

                curr = st.top() + curr;
                st.pop();
            }else{
                curr+=ch;
            }
        }
        return curr;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "(abcd)";
    string res = obj.reverseParentheses(s);
    cout<<res<<en;
    return 0;
}