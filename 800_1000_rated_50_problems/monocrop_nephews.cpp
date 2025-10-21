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

        int ops = 0;

        if (n % 3 == 0) {
            cout << 0 << endl;
        } else {
            while (n % 3 != 0) {
                n += 1;
                ops++;
            }
            cout << ops << endl;
        }
    }

    return 0;
}
