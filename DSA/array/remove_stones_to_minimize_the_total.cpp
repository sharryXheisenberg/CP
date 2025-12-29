/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // this approach gets TLE for large k value
        // while(k-->0){
        //      sort(piles.begin(),piles.end());
        //     long long i = piles.size()-1;
        //     piles[i] = piles[i] - piles[i]/2;
        // }
        // return accumulate(piles.begin(),piles.end(),0);


        // priority queue all I need and two things is imp in priority queue is that all internal operations takes O(log(n)) time 
        // and priority queue automatically rearranges intenally so that max element at it's top 

        int n = piles.size();
        priority_queue<int>pq;   // default it is max heap 
        int sum = 0;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        for(int i=1;i<=k;i++){
            int max_ele = pq.top();
            pq.pop();
            int remove = max_ele/2;
            sum-=remove;
            max_ele -=remove;
            pq.push(max_ele);
        }
        return sum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>piles={4,3,6,7};
    int k = 3;
    int res = obj.minStoneSum(piles,k);
    cout<<res<<en;
    return 0;
}