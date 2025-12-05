/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int al = -1; 
    int s_cnt = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            int c = i + k;
            if (c > al) {
                al = c;
            }
        }

        if (i > al) {
            s_cnt++;
        }
    }
    
    cout << s_cnt << en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}