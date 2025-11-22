/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;
        for(int num:nums){
            if(num%3!=0){
                ops+=1;
            }
        }
        return ops;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3,6,9};
    int ops = obj.minimumOperations(nums);
    cout<<ops<<en;
    return 0;

}