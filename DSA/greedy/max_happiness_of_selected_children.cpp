/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        
        long long ans = 0;
        int turns = 0; 
        for(int i = 0; i < k; i++) {
            long long current_val = happiness[i] - turns;
            if(current_val > 0) {
                ans += current_val;
            } else {
                break; 
            }
            
            turns++; 
        }
        
        return ans;
    }
};
//TC-O(nlog(n))
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> happy = {1, 2, 3};
    int k = 2;
    long long op = obj.maximumHappinessSum(happy, k);
    cout << op << endl; 
    return 0;
}