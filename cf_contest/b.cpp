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
        
        vector<int> a(n);
        int pos_value = n;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {  
                a[i] = -1;
            } else {  
                a[i] = pos_value;
                pos_value--;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}