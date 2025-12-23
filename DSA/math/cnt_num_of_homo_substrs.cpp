/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution{
    public:
    int mod = 1e9+7;
        int countHomogenous(string s){
            int n = s.length();
            int len = 0 , res = 0;
            for(int i=0;i<n;i++){
                if(i>0 && s[i]==s[i-1]){
                    len+=1;
                }else{
                    len = 1;
                }
                res =(res+len)%mod;
            }
            return res;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s ="abbcccaa";
    int op = obj.countHomogenous(s);
    cout<<op<<en;
    return 0;
}