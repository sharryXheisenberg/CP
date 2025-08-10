#include <bits/stdc++.h>
using namespace std;

bool canWin(vector<long long>& A, long long x, long long b) {
    int N = A.size();
    
    // The dealer will try to minimize the maximum bags of any flavor
    // they give us. We need to check if even in the worst case,
    // we can get at least b bags of some flavor.
    
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) continue;
        
        // Calculate: if we focus on flavor i, what's the minimum
        // number of bags of flavor i we're guaranteed to get?
        long long other_total = 0;
        for (int j = 0; j < N; j++) {
            if (j != i) {
                other_total += A[j];
            }
        }
        
        long long min_flavor_i = max(0LL, x - other_total);
        min_flavor_i = min(min_flavor_i, A[i]);
        
        if (min_flavor_i >= b) {
            return true;
        }
    }
    
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, Q;
    cin >> N >> Q;
    
    vector<long long> A(N);
    long long total = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }
    
    sort(A.begin(), A.end(), greater<long long>());
    
    for (int q = 0; q < Q; q++) {
        long long b;
        cin >> b;
        
        if (b > A[0]) {
            cout << -1 << "\n";
            continue;
        }
        
        long long left = b, right = total;
        long long answer = -1;
        
        while (left <= right) {
            long long x = left + (right - left) / 2;
            
            if (canWin(A, x, b)) {
                answer = x;
                right = x - 1;
            } else {
                left = x + 1;
            }
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}