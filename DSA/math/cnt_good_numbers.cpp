/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int mod = 1e9+7;
    int findPower(long long a , long long b){
        if(b==0){
            return 1;
        }
        long long half = findPower(a,b/2);
        long long res = (half*half)%mod;
        
        if(b%2==1){
            res=(res*a)%mod;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        return (long long)findPower(5,(n+1)/2) * findPower(4,n/2) % mod;
    }
};
//TC - O(log(n))
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 4;
    long long op = obj.countGoodNumbers(n);
    cout<<op<<en;
    return 0;
}