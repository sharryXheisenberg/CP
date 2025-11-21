/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        int missingNum = 0;
        int repetitingNum = 0;
        vector<int>res;
        for(int num:nums){
            freq[num]++;
        }
        for(int i=1;i<=n;i++){
            int cnt = freq[i];

            if(cnt == 2){
                repetitingNum = i;
            }
            else if(cnt==0){
                missingNum = i;
            }
        }
        return {repetitingNum,missingNum};
       
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums ={1,1};
    vector<int>res = obj.findErrorNums(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}