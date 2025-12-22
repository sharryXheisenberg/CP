/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int cnt = 0;
        int k = strs[0].length();
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]) {
                ++cnt;
                break;
            }
        } 
    }
    return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<string>strs ={"rrjk","furt","guzm"};
    int res = obj.minDeletionSize(strs);
    cout<<res<<en;
    return 0;
}