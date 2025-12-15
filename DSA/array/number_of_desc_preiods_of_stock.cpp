/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        if(n==1) return 1;
        int cnt =1;
        int res = 1;
        for(int i=1;i<n;++i){
            if((prices[i-1]- prices[i])==1) cnt+=1;
            else cnt = 1;
            res+=cnt;
        }
        return  res;
    }
};
//TC - O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;   
    vector<int>p = {3,2,1,4};
    int op = obj.getDescentPeriods(p);
    cout<<op<<en;
    return 0;
}