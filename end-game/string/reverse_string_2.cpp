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
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> v2(n);
        
        for (int i = 0; i < n; i++) {
            v2[i] = s[n - i - 1];
        }
        
        s = v2;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>v1 = {"h", "e" ,"l" ,"l" ,"o"}; 
    int n = v1.size();
    vector<string>v2(n) ;  
    for(int i=0;i<n;i++){
        v2[i] = v1[n-i-1];
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}