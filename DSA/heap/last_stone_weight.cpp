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
    int lastStoneWeight(vector<int>& stones) {
        // brute force
        // if(stones.size()==1){
        //     return stones[0];
        // }
        // while(stones.size()>1){
        //     sort(stones.begin(),stones.end());
        //     int a = stones.back();stones.pop_back();
        //     int b = stones.back();stones.pop_back();
        //     stones.push_back(abs(a-b));
        // }
        // return stones[0];
        priority_queue<int>pq;
        for(int &stone:stones){
            pq.push(stone);
        }
        while(pq.size()>1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(abs(a-b));
        }
        return pq.top();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>stones ={2,7,4,1,8,1};
    int res = obj.lastStoneWeight(stones);
    cout<<res<<en;
    return 0;
}