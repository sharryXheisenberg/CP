#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;
    priority_queue<int, vector<int>, greater<int>> bg; 
    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;         
            bg.push(x);       
        } 
        else {
            int ans = bg.top();
            bg.pop();           
            cout << ans << endl;
        }
    }
    return 0;
}
