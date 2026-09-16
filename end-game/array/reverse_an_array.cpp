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

class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){
            int n = nums.size();			
			vector<int>res(n) ;
            for(int i=0;i<n;i++){
                res[i] = nums[n-i-1];
            }
            return res;
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1, 2, 3, 4, 5};
    vector<int>res = obj.reverseArray(nums);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}