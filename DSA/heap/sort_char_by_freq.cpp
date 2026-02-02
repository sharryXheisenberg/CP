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

    typedef pair<char,int>P;
        struct lambda{
            bool operator()(P &p1,P &p2){
                return p1.second < p2.second;
            }
        };

    string frequencySort(string s) {
        priority_queue<P,vector<P> , lambda>pq;
        unordered_map<char,int>mp;
        for(char &ch:s){
            mp[ch]++;
        }
        for(auto &it:mp){
            pq.push({it.first,it.second});
        }
        string res = "";
        while(!pq.empty()){
            P temp = pq.top();
            pq.pop();
            res+=string(temp.second,temp.first);
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "Aabb";
    string res= obj.frequencySort(s);
    cout<<res<<en;
    return 0;    
}