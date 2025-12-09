/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
         for(int i = 0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
            i++;
         }
     }
    }
   cout<<s<<en;
 return 0;
}
// TC-O(n)
//SC - O(1)