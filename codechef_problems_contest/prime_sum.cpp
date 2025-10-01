#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int d = 2; d * d <= x; ++d)
        if (x % d == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; ++i) cin >> a[i];

        int c_p = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                if (isPrime(a[i] + a[j])) ++c_p;
            }
        }
        cout << c_p << '\n';
    }
    return 0;
}
