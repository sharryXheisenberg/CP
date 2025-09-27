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
        
        int z = 0, neg = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 0) z++;
            else if(a[i] == -1) neg++;
        }
        
        int op = z; 
        
        
        if(neg % 2 == 1) {
            op += 2; 
        }
        
        cout << op << "\n";
    }
    
    return 0;
}