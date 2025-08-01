#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long op = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            op += (a[i - 1] - a[i]);  
            a[i] = a[i - 1];         
        }
    }

    cout << op <<endl;
    return 0;
}
