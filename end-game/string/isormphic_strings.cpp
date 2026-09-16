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
    bool isomorphicString(string s, string t) {
        int m1[256] = {0}, m2[256] = {0};
        int n = s.size();

        for(int i =0;i<n;i++){
            if(m1[s[i]]!=m2[t[i]]) return false;
            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s= "egg";
    string t = "add";
    bool isOk = obj.isomorphicString(s,t);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}