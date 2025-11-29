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
    ll t;
    cin>>t;
    while(t--){
        ll start , jumps ;
        cin>>start>>jumps;
        ll f_pos;
        if(jumps%4==0) f_pos = 0;
        else if(jumps%4==1) f_pos = -jumps;
        else if(jumps%4==2) f_pos =1;
        else if(jumps%4==3) f_pos= jumps+1;
        if(start%2==0){
            f_pos = start+f_pos;
        } else{
            f_pos = start - f_pos;
        }
        cout<<f_pos<<en;
   }
   return 0;
}

// TC - O(1) = const
// SC- O(1) = const