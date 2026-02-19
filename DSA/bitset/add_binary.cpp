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

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length() - 1;
        int n = b.length() - 1;
        string res = "";

        int sum = 0;
        int carry = 0;

        while(m>=0 || n>=0){
            sum = carry;
            if(m>=0){
                sum+=a[m] - '0';
                m--;
            }
            if(n>=0){
                sum += b[n] - '0';
                n--;
            }
            res.push_back((sum%2==0) ? '0':'1');
            carry = (sum > 1) ? 1:0;
        }
        if(carry){
            res.push_back('1');
        }
        reverse(begin(res),end(res));
        return res;
    }
};

// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string a = "11";
    string b = "1";
    string res = obj.addBinary(a,b);
    cout<<res<<en;
    return 0;
}