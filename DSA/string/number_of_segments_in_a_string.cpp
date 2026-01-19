/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int seg_cnt = 0;
        if(s.length()==0) return 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==' ' && s[i+1]==' ') return 0;
            else if(s[i]==' ' && s[i+1]!=' ' ) seg_cnt+=1;
        }
        return seg_cnt+1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "                ";
    int op = obj.countSegments(s);
    cout<<op<<en;
    return 0;
}