#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        int b_r = INT_MAX;
        for (int m = 0; m <= K; ++m) {
            int newX = X + 100 * m;
            int cntGreater = 0;
            for (int i = 0; i < N; ++i) {
                if (A[i] > newX) ++cntGreater;
            }
            int remaining = max(0, cntGreater - m);
            int rank = 1 + remaining;
            b_r = min(b_r, rank);
        }
        cout << b_r << '\n';
    }
    return 0;
}
