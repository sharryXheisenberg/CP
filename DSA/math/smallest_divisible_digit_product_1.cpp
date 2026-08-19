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
    int findDigitProd(int num){
        int prod = 1;
        while(num){
            prod = prod * (num%10);

            if(prod==0){
                return 0;  
            }
            num/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i = n ; i<=n+10;i++){
            if((findDigitProd(i))%t==0){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 15;
    int t = 3;
    int res = obj.smallestNumber(n,t);
    cout<<res<<en;
    return 0;
}