/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string another = "" ;
        long long res = 0;
        long long sum = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                another.push_back(s[i]);
                sum+=s[i]-'0';
                res = stoll(another);
            }
        }
        return (sum)*(res);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 10203004;
    long long op = obj.sumAndMultiply(n);
    cout<<op<<en;
    return 0;
}