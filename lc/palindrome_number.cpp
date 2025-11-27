/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string res = to_string(x);
        int l = 0;
        int r = res.size()-1;
        while(l<=r){
            if(res[l]!=res[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int x = 10;
    bool ok = obj.isPalindrome(x);
    if(ok){
        cout<<"Yes it is palindrome"<<en;
    }
    else{
        cout<<"No is is not palindrome"<<en;
    }

    return 0;
}