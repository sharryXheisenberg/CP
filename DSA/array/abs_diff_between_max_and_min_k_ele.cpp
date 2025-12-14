/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;



class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return 0;
        int k_1 = 0;
        int k_2 = 0;
        for(int i=0;i<k;i++){
            k_1+=nums[i];
        }
        for(int i=n-1;i>=n-k;i--){
            k_2+=nums[i];
        }
        return abs(k_1-k_2);

    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {5,2,2,4};
    int k =2 ;
    int op = obj.absDifference(nums,k);
    cout<<op<<en;
    return 0;
}