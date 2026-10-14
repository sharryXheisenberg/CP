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
    bool isValid(string s) {
        if(s.length() %2!=0) return false;
        stack<char>st;
        for(char ch:s){
            if(ch=='('){
                st.push(')');
            }
            else if(ch == '{'){
                st.push('}');
            }else if(ch == '['){
                st.push(']');
            }
            if(st.empty() || st.top()!=ch){
                return false;
            }
            else{
                st.pop();
            }
        }
        return st.empty();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "()[]{}";
    bool isOK = obj.isValid(s);
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
    
}