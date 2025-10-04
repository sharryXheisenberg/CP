#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> version(n + 1);
    for(int i = 1; i <= n; i++) {
        version[i] = i; 
    }
    
    for(int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        
        int count = 0;
        for(int j = 1; j <= n; j++) {
            if(version[j] <= x) {
                version[j] = y;
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}