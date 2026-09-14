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
    int largestDigit(int n) {
        int maxEle = 1;
        int curnt_ele = 0;
        if(n==0)
            return 0;
        while(n>0){
            curnt_ele = n%10;
            n/=10;
            maxEle = max(curnt_ele,maxEle);
        }
        return maxEle;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 1;
    int res = obj.largestDigit(n);
    cout<<res<<en;
    return 0;
}