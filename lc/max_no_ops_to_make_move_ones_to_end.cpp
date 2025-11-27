/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


// left to right is beneficial for getting max number of operations while to get min ops traverse from right to left
class Solution {
public:
    int maxOperations(string s) {
        int n = s.length();
        int res = 0;
        int cnt_one = 0;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                res+=cnt_one;
                while(i<n && s[i]=='0')
                    i++;
            }else{
                cnt_one+=1;
                i++;
            }
        }
        return res;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "00111";
    int op = obj.maxOperations(s);
    cout<<op<<en;
    return 0;
}

// TC - O(n)
// SC - O(1)