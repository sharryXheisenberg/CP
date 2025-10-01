#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='('||it=='{' || it=='[') st.push(it); 
        if(st.size()==0) return false;
        else{
         char ch = st.top();
            st.pop();
         if((it=='(' && ch == ')') || (it=='{' && ch == '}') || (it=='[' && ch==']')){
            continue;
         }else return false;
       }
    }
    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s="{}";
    if(isValid(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
}