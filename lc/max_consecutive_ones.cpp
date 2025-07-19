#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;    
        int current_count = 0;  
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                current_count++;                          
                max_count = max(max_count, current_count); 
            }
            else{
                current_count = 0;  
            }
        }
        
        return max_count;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,0,1,1,1,1,1,1,1,1,1,1};
    int result = obj.findMaxConsecutiveOnes(nums);
    cout << result << endl;  
    return 0;
}