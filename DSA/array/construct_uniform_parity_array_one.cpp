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
    bool uniformArray(vector<int>& nums1) {
       return true;  
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums1={2,3};
    bool isOK = obj.uniformArray(nums1);
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;    
}