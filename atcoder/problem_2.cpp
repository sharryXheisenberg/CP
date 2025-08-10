#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    double ans = 0.0;
    for (int l = 0; l < n; l++) {
        int count_t = 0;
        for (int r = l; r < n; r++) {
            if (s[r] == 't') count_t++;
            int len = r - l + 1;
            if (len >= 3 && s[l] == 't' && s[r] == 't') {
                double rate = (double)(count_t - 2) / (double)(len - 2);
                ans = max(ans, rate);
            }
        }
    }
    const double EPS = 1e-18;
    ans += EPS;

    cout << fixed << setprecision(17) << ans << "\n";
    return 0;
}
