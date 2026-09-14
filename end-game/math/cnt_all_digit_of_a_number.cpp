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
    int countDigit(int n) {
        int digitCnt = 0;
        if(n==0)
            return 1;
        while(n>0){
            n/=10;
            digitCnt+=1;
        }
        return digitCnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 234;
    int res = obj.countDigit(n);
    cout<<res<<en;
    return 0;
}