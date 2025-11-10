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
        int m = 2 * n;

        vector<int> p1(n + 1);
        vector<int> p2(n + 1);
        for (int i = 1; i <= n; ++i) cin >> p1[i];
        for (int i = 1; i <= n; ++i) cin >> p2[i];

        vector<int> min1(n + 2);
        vector<int> max1(n + 2);
        vector<int> min2(n + 2);
        vector<int> max2(n + 2);

        min1[0] = m + 1;
        max1[0] = 0;
        min2[n + 1] = m + 1;
        max2[n + 1] = 0;

        for (int i = 1; i <= n; ++i) {
            min1[i] = min(min1[i - 1], p1[i]);
            max1[i] = max(max1[i - 1], p1[i]);
        }

        for (int i = n; i >= 1; --i) {
            min2[i] = min(min2[i + 1], p2[i]);
            max2[i] = max(max2[i + 1], p2[i]);
        }

        vector<vector<int>> groups(m + 1);
        for (int j = 1; j <= n; ++j) {
            int lj = min(min1[j], min2[j]);
            int rj = max(max1[j], max2[j]);
            groups[rj].push_back(lj);
        }

        long long ans = 0;
        int max_l = 0;

        for (int r = 1; r <= m; ++r) {
            for (int l_val : groups[r]) {
                max_l = max(max_l, l_val);
            }
            ans += max(0, min(r, max_l));
        }

        cout << ans << en;
    }
    return 0;
}