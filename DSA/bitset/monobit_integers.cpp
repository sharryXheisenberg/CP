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
    bool isMonobit(int num) {
        if (num == 0) return true; 
        while (num > 0) {
            if ((num % 2) == 0) {
                return false; 
            }
            num = num / 2;
        }
        return true;
    }

    int countMonobit(int n) {
        int count = 0;
        for(int i = 0; i <= n; i++){
            if(isMonobit(i)) {
                count++;
            }
        }
        return count;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n1 = 1;
    cout << "Input: " << n1 << " -> Output: " << sol.countMonobit(n1) << en;
    int n2 = 4;
    cout << "Input: " << n2 << " -> Output: " << sol.countMonobit(n2) << en;
    return 0;
}