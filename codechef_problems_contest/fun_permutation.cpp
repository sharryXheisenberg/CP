#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        vector<int> q(n);
        
        // Key insight: We can construct q such that most sums are divisible by 3
        // This ensures GCD >= 3 for adjacent pairs
        
        // Strategy: For each position, try to pick q[i] such that p[i] + q[i] ≡ 0 (mod 3)
        // Group numbers 1 to n by their remainder modulo 3
        vector<vector<int>> groups(3);
        for (int i = 1; i <= n; i++) {
            groups[i % 3].push_back(i);
        }
        
        vector<bool> used(n + 1, false);
        
        // First pass: try to make sums divisible by 3
        for (int i = 0; i < n; i++) {
            int target_rem = (3 - (p[i] % 3)) % 3;
            
            bool found = false;
            for (int num : groups[target_rem]) {
                if (!used[num]) {
                    q[i] = num;
                    used[num] = true;
                    found = true;
                    break;
                }
            }
            
            // If we couldn't find a number that makes sum divisible by 3,
            // try to find any number that gives GCD >= 3 with previous
            if (!found) {
                for (int candidate = 1; candidate <= n; candidate++) {
                    if (used[candidate]) continue;
                    
                    bool valid = true;
                    if (i > 0) {
                        int prev_sum = p[i-1] + q[i-1];
                        int curr_sum = p[i] + candidate;
                        if (gcd(prev_sum, curr_sum) < 3) {
                            valid = false;
                        }
                    }
                    
                    if (valid) {
                        q[i] = candidate;
                        used[candidate] = true;
                        found = true;
                        break;
                    }
                }
            }
            
            // Final fallback: just use any unused number
            if (!found) {
                for (int candidate = 1; candidate <= n; candidate++) {
                    if (!used[candidate]) {
                        q[i] = candidate;
                        used[candidate] = true;
                        break;
                    }
                }
            }
        }
        
        // Output the result
        for (int i = 0; i < n; i++) {
            cout << q[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}