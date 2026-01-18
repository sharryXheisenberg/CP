/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {
        int v_score = 0;
        int c_score = 0;
        for(char c:s){
            if(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u') v_score+=1;
            else if(c!=' '&&(!isdigit(c))){
                c_score+=1;
            }
        }
        if(c_score==0) return 0;
        return floor(v_score/c_score);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s= "au 123";
    int res = obj.vowelConsonantScore(s);
    cout<<res<<en;
    return 0;
}