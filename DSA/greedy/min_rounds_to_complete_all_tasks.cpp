/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> freq;
        int rnd =0;

        for(int num:tasks){
            freq[num]++;
        }
        for(auto& it:freq){
            int cnt = it.second;
            if(cnt==1) return -1;
            if(cnt%3==0) rnd += cnt/3;
            else {
               rnd += (cnt/3) + 1;
            }
        }
        return  rnd;
    }
};
//TC - O(n)
//SC - O(1)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>tasks = {2,3,3};
    int op = obj.minimumRounds(tasks);
    cout<<op<<en;
    return 0;
}