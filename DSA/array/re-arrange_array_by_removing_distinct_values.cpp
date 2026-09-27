/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<int> ans;
        int remainingEle = nums.size();

        while (remainingEle > 0) {
            for (auto& [val, count] : freq) {
                if (count > 0) {
                    ans.push_back(val);
                    count--;
                    remainingEle--;
                }
            }
        }

        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    
    
}