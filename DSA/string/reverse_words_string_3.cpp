
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
    string reverseWords(string s) {
        int l = 0;
        for(int r=0;r<=s.length();r++){
            if(r == s.length() || s[r] == ' '){
                reverse(s.begin()+l , s.begin()+r);
                l=r+1;
            }
        }
        return s;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "Let's take LeetCode contest";
    string res= obj.reverseWords(s);
    cout<<res<<en;
    return 0;
}