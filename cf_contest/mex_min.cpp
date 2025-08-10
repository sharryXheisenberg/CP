#include <bits/stdc++.h>
using namespace std;

int mex(vector<int>& arr) {
    set<int> s(arr.begin(), arr.end());
    int result = 0;
    while (s.count(result)) {
        result++;
    }
    return result;
}

bool isGoodTriplet(int a, int b, int c) {
    vector<int> triplet = {a, b, c};
    int mexVal = mex(triplet);
    int maxVal = *max_element(triplet.begin(), triplet.end());
    int minVal = *min_element(triplet.begin(), triplet.end());
    return mexVal == maxVal - minVal;
}

bool canMakeGood(vector<int>& a, int pos) {
    int n = a.size();
    
    if (pos == n) {
        for (int i = 0; i <= n - 3; i++) {
            if (!isGoodTriplet(a[i], a[i+1], a[i+2])) {
                return false;
            }
        }
        return true;
    }
    
    if (a[pos] != -1) {
        return canMakeGood(a, pos + 1);
    }
    
    for (int val = 0; val <= 102; val++) {
        a[pos] = val;
        
        bool valid = true;
        for (int i = max(0, pos - 2); i <= min(n - 3, pos); i++) {
            if (i + 2 < n && a[i] != -1 && a[i+1] != -1 && a[i+2] != -1) {
                if (!isGoodTriplet(a[i], a[i+1], a[i+2])) {
                    valid = false;
                    break;
                }
            }
        }
        
        if (valid && canMakeGood(a, pos + 1)) {
            return true;
        }
    }
    
  
    a[pos] = -1;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (canMakeGood(a, 0)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}