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
    string smallestPalindrome(string s) {
       int n = s.length();
    
       int mid = n/2;

       sort(begin(s),begin(s) + mid);
       for(int i=0;i<mid;i++){
        s[n-i-1]=s[i];
       }
       return s;
       
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "babab";
    string res = obj.smallestPalindrome(s);
    cout<<res<<en;
    return 0;
}   