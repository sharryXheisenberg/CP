/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
#define mod 1e9+7
using namespace std;

class Solution {
public:
    int m = 1e9+7;
    int countOrders(int n) {
        if(n==1) return 1;
        long long res = 1;  //for n==1
        for(int i=2;i<=n;i++){
            int spaces = (i-1)*2 +1;
            int pos = spaces*(spaces+1)/2;
            res*=pos;
            res%=m;
        }
        return res;
    }
};
// TC - O(n)
//SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 3;
    int res = obj.countOrders(n);
    cout<<res<<en;
    return 0;
}