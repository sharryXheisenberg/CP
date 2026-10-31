/* 
 *  Author - Balerion_The_second  
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long int
#define pb push_back
#define vec vector<ll>
#define en "\n"

using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    string p, q;
    cin >> p >> q;
    vector<int> countP(26, 0);
    vector<int> countQ(26, 0);
    for (char c : p) countP[c - 'a']++;
    for (char c : q) countQ[c - 'a']++;
    for (int i = 0; i < 26; i++) {
        int common = min(countP[i], countQ[i]);
        countP[i] -= common;A
        countQ[i] -= common;
    }
    for (int i = 0; i < 26; i++) {
        if (countQ[i] > 0) {
            cout << "NO" << en;
            return;
        }
    }
    if (countP['s' - 'a'] == 1 && countP['i' - 'a'] == 1 && countP['x' - 'a'] == 1) {
        int total_leftover = 0;
        for (int i = 0; i < 26; i++) {
            total_leftover += countP[i];
        }

        if (total_leftover == 3) {
            cout << "YES" << en;
            return;
        }
    }
    cout << "NO" << en;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}