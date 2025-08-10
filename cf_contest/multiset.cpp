#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> S(n), T(n);
        
        for (int i = 0; i < n; i++) {
            cin >> S[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> T[i];
        }
        map<int, int> ava;
        
        for (int x : S) {
            int r1 = x % k;
            int r2 = (k - x % k) % k; 
            ava[r1]++;
            if (r1 != r2) {
                ava[r2]++;
            }
        }
        
        map<int, int> needed; 
        bool possible = true;
        
        for (int y : T) {
            int r = y % k;
            needed[r]++;
        }
        
        for (auto& p : needed) {
            int residue = p.first;
            int count = p.second;
            if (ava[residue] < count) {
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}