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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int decreases = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) decreases += (a[i] - b[i]);
        }

        cout << decreases + 1 << "\n";
    }
    return 0;
}
