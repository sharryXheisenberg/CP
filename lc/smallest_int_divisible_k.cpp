/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k==1) return 1;
        int num = 0;
        for(int i=1;i<=k;i++){
            num = (num*10 + 1)%k;
            if(num==0)
                return i;
        }
        return -1;
    }
};
// TC - O(K) = constant


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int k = 3;
    int op = obj.smallestRepunitDivByK(k);
    cout<<op<<en;
    return 0;
}