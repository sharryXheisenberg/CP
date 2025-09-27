#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> freq(n + 1, 0);
        for(int i = 0; i < n; i++) {
            if(a[i] <= n) {
                freq[a[i]]++;
            }
        }
        int op = 0;
        int m = 0;
        for(int i = 0; i < k; i++) {
            if(freq[i] == 0) {
                m++;
            }
        }
        int k_cnt = freq[k];
        op = max(m, k_cnt);
        
        cout << op<< "\n";
    }
    
    return 0;
}