/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:

    int Operate(int a , int b, string token){
        if(token=="+") return a+b;
         if(token=="-") return a-b;
         if(token == "*") return (long)a * (long)b;   // explicit type casting 
        if(token == "/")  return a/b;
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string &token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int res1 = st.top();
                st.pop();
                int res2 = st.top();
                st.pop();
                long long result = Operate(res2,res1,token);
                st.push(result);
            }else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<string>tokens = {"4","13","5","/","+"};
    int op = obj.evalRPN(tokens);
    cout<<op<<en;
    return 0;
}