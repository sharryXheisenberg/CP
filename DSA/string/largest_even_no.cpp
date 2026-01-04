/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    string largestEven(string s) {
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            if((s[i] - '0') % 2!=0){
                s.pop_back();
            }else{
                break;
            }
        }
        return s;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "234531245431";
    string res  = obj.largestEven(s);
    cout<<res<<en;
    return 0;
}