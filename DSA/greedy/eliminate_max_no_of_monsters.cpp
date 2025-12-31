/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
#define vec vector
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int>time(n);
        for(int i=0;i<n;i++){     // O(N)
            time[i] = ceil((float)dist[i]/speed[i]);
        }
        sort(time.begin(),time.end());   // O(log(n))
        int cnt =1;
        int time_pass = 1;

        for(int i= 1;i<n;i++){    //O(N)
            if(time[i]-time_pass<=0){
                return cnt;
            }
            cnt+=1;
            time_pass+=1;
        }
        return cnt;
    }
};
// TC - O(n+log(n)) || O(n)
// SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vec<int>dist = {1,3,4};
    vec<int>speed = {1,1,1};
    int res = obj.eliminateMaximum(dist, speed);
    cout<<res<<en;
    return 0;
}