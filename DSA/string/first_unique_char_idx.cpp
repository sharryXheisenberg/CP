/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);
        int min_idx = INT_MAX;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};

// TC- O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s ="loveleetcode";
    int p = obj.firstUniqChar(s);
    cout<<p<<en;
    return 0;
}