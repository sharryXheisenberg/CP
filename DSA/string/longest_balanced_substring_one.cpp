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

    bool checkBalanced(vector<int>&freq){
       int commonFre = 0;
       for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            if(commonFre == 0) 
                commonFre = freq[i];
            else if(freq[i]!=commonFre){
                return false;
            }
       } 
       return true;
    }
    int longestBalanced(string s) {
       int n = s.length();
       int maxL =0;

       for(int i=0;i<n;i++){
        vector<int>freq(26,0);
        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;
            if(checkBalanced(freq)){
                maxL = max(maxL,j-i+1);
            }
        }
       }
       return maxL;
    }
};

// TC - O(n^2)
// SC - O(n)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abbac";
    int res = obj.longestBalanced(s);
    cout<<res<<en;
    return 0;
}