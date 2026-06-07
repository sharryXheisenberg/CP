/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;
        int start = max(1, n - k);
        int end = n + k;
        
        for(int i = start; i <= end; i++){
            if((abs(n - i) <= k) && ((n & i) == 0)){
                sum += i;
            }
        }
        return sum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int res = 0;
    int n = 2, k = 3;
    res = obj.sumOfGoodIntegers(n, k);
    cout << res << en;
    return 0;
}