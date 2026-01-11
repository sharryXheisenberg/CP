/* *
 (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        int cnt = 0;
        unordered_set<char>st;
        for(int i=0;i<s.length();i++){
            st.insert(s[i]);
            int dis_cnt_chars = st.size();
            int curr_len = i+1;
            if(dis_cnt_chars == curr_len%3){
                cnt+=1;
            }
        }
        return cnt;
    }  
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abc";  
    int res = obj.residuePrefixes(s);
    cout << res << en;
    return 0;
}