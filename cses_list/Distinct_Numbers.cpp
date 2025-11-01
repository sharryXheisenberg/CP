#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> x(n);
    for (int i = 0; i < n; ++i) cin >> x[i];
    
    sort(x.begin(), x.end());
    auto it = unique(x.begin(), x.end());
    cout << distance(x.begin(), it) << endl;
    return 0;
}
