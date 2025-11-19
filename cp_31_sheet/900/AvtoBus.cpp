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
        ll n;
        cin>>n;
        if(n<4 || n%2==1){
            cout<<-1<<en;
        }
        else{
            ll min = ceil(n*1.0/6);
            ll max = n/4;
            cout<<min<<" "<<max<<en;
        }
    }
    return 0;
}