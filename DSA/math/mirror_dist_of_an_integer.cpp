/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int mirrorDistance(int n) {
        // if(n<10) return 0;
        string num = to_string(n);
        reverse(num.begin(),num.end());
        int op = stoi(num);
        return abs(n-op);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 7;
    int res = obj.mirrorDistance(n);
    cout<<res<<en;
    return 0;
}