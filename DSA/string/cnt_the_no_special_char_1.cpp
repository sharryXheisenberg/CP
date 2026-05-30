/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    int numberOfSpecialChars(string word) {
        unordered_set<char> tr;
        int cnt = 0;
        for(char c : word){
            tr.insert(c);
        }
        for(char c = 'a'; c <= 'z'; c++){
            if(tr.count(c) && tr.count(c - 32)){
                cnt += 1;
            }
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "aaAbcBC";
    int res = obj.numberOfSpecialChars(s);
    cout << res << en;
    return 0;
}