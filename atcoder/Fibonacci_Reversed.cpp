#include <bits/stdc++.h>
using namespace std;

long long f(long long x) {
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return stoll(s); 
}

int main() {
    long long x, y;
    cin >> x >> y;
    
    vector<long long> seq(10);
    seq[0] = x;
    seq[1] = y;

    for (int i = 2; i < 10; i++) {
        seq[i] = f(seq[i-1] + seq[i-2]); 
    }

    cout << seq[9] << endl; 
    return 0;
}
