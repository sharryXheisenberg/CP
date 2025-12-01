/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        // approach 1
        int i = 0;
        while(i<n-1){
            i+=(bits[i]==1) ? 2:1;
        }
        return i == n-1;

        // approach 2
        // int cnt_one = 0;
        // for(int i=n-2;i>=0;i++){
        //     if(bits[i]==1) cnt_one+=1;
        //     else cnt_one = 0;
        // }
        // if(cnt_one%2==0) return true;
        // else return false;
        
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>bits = {1,1,1,0};
    bool isOk = obj.isOneBitCharacter(bits);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}