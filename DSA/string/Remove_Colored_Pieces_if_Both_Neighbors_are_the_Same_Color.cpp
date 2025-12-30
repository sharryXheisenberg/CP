/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.length();
        if(n==2) return false;
        int a_cnt=0 , b_cnt =0;
        for(int i=1;i<n-1;i++){
            if(colors[i-1]==colors[i] && colors[i]==colors[i+1]){
                if(colors[i]=='A'){
                    a_cnt+=1;
                } else{
                    b_cnt+=1;
                }
            }
        }
        return a_cnt>b_cnt ;
    }
};
//TC - O(N)
// SC- O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string colors= "ABBBBBBBAAA";
    bool isOk = obj.winnerOfGame(colors);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}