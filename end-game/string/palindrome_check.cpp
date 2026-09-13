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
		bool palindromeCheck(string& s){
			int n = s.length();
            int i =0 ;
            int j = n-1;
            while(i<j){
                if(s[i]!=s[j]){
                    return false;
                }
                i++;
                j--;
            }
            return true;
		}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "mam";
    bool isOK = obj.palindromeCheck(s);
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}