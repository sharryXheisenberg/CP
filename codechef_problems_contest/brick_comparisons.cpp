#include <bits/stdc++.h>
using namespace std;

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

        int ele = a[0];    
        int last_ele = 1;   

        for (int i = 1; i < n; i++) {
            if (a[i] > ele) {
                ele = a[i];          
                last_ele = i + 1;   
            }
        }

        cout << last_ele << "\n";
    }

    return 0;
}
