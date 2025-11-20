#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        for(int i=0;i<n;++i){
            res.push_back(nums[i]); ///Take the current 'x' element (from the first half: 0 to n-1)

           // Taking the corresponding 'y' element (from the second half: n to 2n-1)
           res.push_back(nums[n+i]);  // if(i = 0 then n = 3 -> 3+0 = 3) and from this array {2, 5, 1, 3, 4, 7} we can take value 3
        }
        return res;
    }
};  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,3,4,4,3,2,1};
    int n = 4;
    vector<int>res = obj.shuffle(nums,n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;

}