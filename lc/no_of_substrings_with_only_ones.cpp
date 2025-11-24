/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


// formula for finding substring are - n*(n+1)/2 where n is count of that target element or substring element
class Solution {
public:
    const int M = 1e9+7;
    int numSub(string s) {
       int res = 0;
       int cnt  = 0;
       for(char ch:s){
            if(ch=='1'){
             cnt+=1;
             res = (res+cnt)%M;
           }
           else{
            cnt = 0;
           }
       }
       return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "111111";
    int op = obj.numSub(s);
    cout<<op<<en;
    return 0;
}

// TC - O(n)
// SC - O(1)