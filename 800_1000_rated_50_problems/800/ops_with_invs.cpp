/* * Author - Balerion_The_second
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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt = 0;
        int max_so_far = 0;
        for(int i=0; i<n; i++){
            if(a[i] < max_so_far){
                cnt++;
            } else {
                max_so_far = a[i];
            }
        }
        cout<<cnt<<en;
    }
    return 0;
}