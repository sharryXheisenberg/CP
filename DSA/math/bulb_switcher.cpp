/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 4;
    int res = obj.bulbSwitch(n);
    cout<<res<<en;
    return 0;
}