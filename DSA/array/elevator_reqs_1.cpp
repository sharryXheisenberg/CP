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
    int elevatorRequests(int n, vector<int>& requests) {
        int p = requests.size();
        int first = requests[0];
        for(int i=1;i<p;i++){
            first+=abs(requests[i-1]-requests[i]);
        }
        return first;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 5;
    vector<int>reqs = {2,0,0};
    int res= obj.elevatorRequests(n,reqs);
    cout<<res<<en;
    return 0;
}