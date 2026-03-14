/* 
 *   Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec a(7);
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }
    
    int i = 0;
    while(n > 0){
        n -= a[i];         
        if(n <= 0){
            cout << i + 1 << en;
            break;
        }
        i = (i + 1) % 7; 
    }
    
    return 0;
}