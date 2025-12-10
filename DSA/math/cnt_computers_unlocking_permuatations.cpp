/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
int M  = 1e9+7;
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        long long res = 1;

        for(int i=1;i<n;i++){
            if(complexity[i] <= complexity[0]) return 0;

            res = (res * i) % M;
        }
        return res;
    }
};
// TC - O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>v = {3,3,3,4,4,4};
    long long res = obj.countPermutations(v);
    cout<<res<<en;
    return 0;
}