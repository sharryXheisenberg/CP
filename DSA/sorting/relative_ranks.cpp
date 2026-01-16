/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>op(score.begin(),score.end());
        vector<string>res;
        int n = score.size();
        sort(score.begin(),score.end());
        if(n>=3){
            int gold_medal = score[n-1];
            int silver_medal = score[n-2];
            int bronze_medal = score[n-3];
            for(int i=0;i<n;i++){
                // if()
            }
        }

    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}