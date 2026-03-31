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
    bool canBeEqual(string s1, string s2) {
        bool even_match = (s1[0] == s2[0] && s1[2] == s2[2]) || (s1[0] == s2[2] && s1[2] == s2[0]);
        bool odd_match = (s1[1] == s2[1] && s1[3] == s2[3]) || (s1[1] == s2[3] && s1[3] == s2[1]);
        return even_match && odd_match;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s1 = "abcd";
    string s2 = "cdab";

    bool isOk = obj.canBeEqual(s1,s2);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}