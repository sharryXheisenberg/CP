#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int m_d = 0;
        for(int i = 0; i < n; i += 2) {
            int diff = abs(a[i+1] - a[i]);
            m_d = max(m_d, diff);
        } 
        cout << m_d <<endl;
    }
    return 0;
}