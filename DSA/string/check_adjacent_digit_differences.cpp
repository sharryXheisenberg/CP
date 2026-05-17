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
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0; i < s.length() - 1; i++){
            if(abs((s[i] - '0') - (s[i+1] - '0')) > 2){
                return false; 
            }
        }
        
        return true; 
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    
    // Testing with a string that should be false
    string s = "129"; 
    bool isOK = obj.isAdjacentDiffAtMostTwo(s);
    
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    
    return 0;
}