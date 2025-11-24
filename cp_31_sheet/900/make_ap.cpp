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
        ll a , b, c;
        cin>>a>>b>>c;

        bool ans = false;
        ll new_a = 2 * b-c;
        if(new_a/a > 0 && new_a % a == 0){
            ans = true;
        }

        ll new_b = (a+c)/2;
        if(new_b/b>0 && new_b%b==0 && (c-a)%2==0){
            ans = true;
        }
        ll new_c = 2*b - a;
        if(new_c/c>0 && new_c%c==0){
            ans = true;
        }
        if(ans) cout<<"YES"<<en;
        else cout<<"NO"<<en;
    }
    return 0;
}

// TC - O(1) - best
// SC - O(1) - best 