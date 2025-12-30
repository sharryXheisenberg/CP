/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>st;
        for(char c:s){
            st.insert(c);
        }
        return st.size();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abcd";
    int op = obj.maxDistinct(s);
    cout<<op<<en;
    return 0;
}