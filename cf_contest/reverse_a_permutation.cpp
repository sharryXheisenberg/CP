/* * Author - Balerion_The_second  
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
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vec p(n);
        vec pos(n + 1);  
        for(int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i; 
        }
        for(int i = 0; i < n; i++) {
            int tar = n - i;  
            if(p[i] != tar) {
                int l = i;
                int r = pos[tar];
                reverse(p.begin() + l, p.begin() + r + 1);
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << en;
    }
    return 0;
}