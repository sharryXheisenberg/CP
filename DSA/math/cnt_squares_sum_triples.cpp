/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                    int c_sq = (i*i) + (j*j);
                    int c = sqrt(c_sq);
                    if((c*c) == c_sq && c<=n){
                        cnt+=1;
                    }
                }
            }
            return cnt;
        }   
};


// TC - O(n^2)
// SC - O(?)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 5;
    int op = obj.countTriples(n);
    cout<<op<<en;
    return 0;
}