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
		bool anagramStrings(string &s,string &t){
			sort(t.begin(),t.end());
            sort(s.begin(),s.end());
            if(s==t){
                return true;
            }
            return false;
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "dog";
    string t = "cat";
    bool isOk = obj.anagramStrings(s,t);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}