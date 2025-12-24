/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int cnt= 0;
        int sum = accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        int n = capacity.size();
        for(int i=n-1;i>=0;i--){
            if(sum>0){
                sum-=capacity[i];
                cnt++;
            }
        }   
        return cnt;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> apple = {1,3,2};
    vector<int> capacity = {4,3,1,5,2};
    int res = obj.minimumBoxes(apple,capacity);
    cout<<res<<en;
    return 0;
}