/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();
        if(n==1) return "";
        for(int i=0;i<n/2;i++){   //O(n/2)
            if(palindrome[i]!='a'){
                palindrome[i]='a'; // O(1)
                return palindrome;
            }            
        }
        palindrome[n-1] = 'b';  //O(1) 

        return palindrome;
    }
};
//TC - O(n/2) = O(n)
//SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string op ="aaaaa";
    string res = obj.breakPalindrome(op);
    cout<<res<<en;
    return 0;
}