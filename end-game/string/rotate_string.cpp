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
	bool rotateString(string& s,string& goal){
        if(s.length()!=goal.length()){
            return false;
        }
        // here  main thing is that concatenate string itself to get idea of the substring
        string concateStr = s +  s;
        return concateStr.find(goal)!=string::npos;  // it will find the substring in the goal string 
	}
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abcde";
    string  g = "cdeab";
    bool isOk =obj.rotateString(s,g);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}