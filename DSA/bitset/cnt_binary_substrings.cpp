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
    int countBinarySubstrings(string s) {
        int res = 0;

        int prevCnt = 0;
        int currCnt = 1;

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                currCnt+=1;
            }else{
                res += min(prevCnt,currCnt);
                prevCnt = currCnt;
                currCnt=1;
            }
        }
        return res + min(prevCnt,currCnt);
    }
};
// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "10101";
    int res = obj.countBinarySubstrings(s);
    cout<<res<<en;
    return 0;
}