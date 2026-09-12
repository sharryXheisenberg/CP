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

class Solution{	
public:	
    string largeOddNum(string& s){
       int n = s.length();
       int last_odd = -1;
       for(int i=n-1;i>=0;i--){
            if((s[i]-'0')%2!=0){
                last_odd=i;
                break;
            }
       }
       if(last_odd == -1) return "";
       int fir_non_z = 0;
       while(fir_non_z <=last_odd && s[fir_non_z]=='0'){
        fir_non_z++;
       }
       return s.substr(fir_non_z , last_odd - fir_non_z+1);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s= "0032579";
    string res = obj.largeOddNum(s);
    cout<<res<<en;
    return 0;
}