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
    bool checkOnesSegment(string s) {
        int n = s.length();
        for(int i = 1; i < n; i++){
            if(s[i-1] == '0' && s[i] == '1'){
                return false; 
            }
        }
        return true; 
    }
};

//TC  - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "110";
    bool isOK = obj.checkOnesSegment(s);
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}