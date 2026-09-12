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
		string longestCommonPrefix(vector<string>& str){
			sort(str.begin(),str.end());
            int n = str.size();
            string ans="";
            string first = str[0];
            string last = str[n-1];
            for(int i=0;i<=(min(first.length()-1,last.length()-1));i++){
                if(first[i]!=last[i]){
                    break;
                }
                ans+=first[i];
            }
            return ans;
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<string>str = {"single"};
    string res = obj.longestCommonPrefix(str);
    cout<<res<<en;
    return 0;
}