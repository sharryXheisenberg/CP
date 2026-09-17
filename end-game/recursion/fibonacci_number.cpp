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
    int fib(int n) {
        if(n==0) 
            return 0;
        
        if(n==1)
            return 1;

        return fib(n-1) + fib(n-2);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 3;
    int res = obj.fib(n);
    cout<<res<<en;
    return 0;
}