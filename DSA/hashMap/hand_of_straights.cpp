/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize){
            return false;
        }
        map<int,int>mp;
        for(int &handNumber : hand){
            mp[handNumber]++;
        }
        while(!mp.empty()){
            int curnt = mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[curnt+i]==0){
                    return false;
                }
                mp[curnt+i]--;
                if(mp[curnt+i]<1){
                    mp.erase(curnt+i);
                }
            }
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>hand = {1,2,3,4,5};
    int grpSze = 4;
    bool isOk = obj.isNStraightHand(hand,grpSze);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }   
    return 0;
}