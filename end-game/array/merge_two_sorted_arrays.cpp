/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define en endl
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(const vector<int>& nums1, const vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> res;
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                i++;
                j++;
            } 
            else if (nums1[i] < nums2[j]) {
                i++;
            } 
            else {
                j++;
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums1 = {-45, -45, 0, 0, 2};
    vector<int> nums2 = {-50, -45, 0, 0, 5, 7}; 
    vector<int> res = obj.intersectionArray(nums1, nums2);
    for (int num : res) {
        cout << num << " "; 
    }
    cout << en;
    return 0;
}