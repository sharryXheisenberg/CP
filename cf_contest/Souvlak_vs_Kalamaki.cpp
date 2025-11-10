#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define en endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool c_w = true;

        for (int i = 1; i + 1 < n; i += 2) {
            if (a[i] != a[i + 1]) {
                c_w = false;
                break;
            }
        }

        if (c_w) {
            cout << "YES"<<en;
        } else {
            cout << "NO"<<en;
        }
    }
    
    return 0;
}