/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
// #define unordered_map mp
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution{	
	public:
		vector<char> frequencySort(string& s){
			unordered_map<char,int>mp;
            for(char ch:s){
                mp[ch]++;
            }
            // pair in vector 
            vector<pair<char,int>>freqVec(mp.begin(),mp.end());
            sort(freqVec.begin(),freqVec.end(), [](const pair<char,int>& a , const pair<char,int>& b){
                if(a.second == b.second){
                    return a.first < b.first;
                }
                return a.second > b.second;
            });
            
            vector<char>res;
            for(auto& p:freqVec){
                res.push_back(p.first);
            }
            return res;
		}
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "raaaajj";
    vector<char>res = obj.frequencySort(s);
    for(char ch:res){
        cout<<ch<<" ";
    }
    return 0;
}