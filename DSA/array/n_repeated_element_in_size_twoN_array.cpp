/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       int n = nums.size()/2;
       int ans = 0;
       unordered_map<int,int> map;
       for(int i:nums){
            map[i]++;
       } 
       for(auto it:map){
            if(it.second == n) ans = it.first;
       }
       return ans;
    } 
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}