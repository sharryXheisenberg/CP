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
        string s;
        cin >> s;
        int cnt_a = 0, cnt_b = 0;
        for(char c : s) {
            if(c == 'a') cnt_a++;
            else cnt_b++;
        }
        if(cnt_a == 0 || cnt_b == 0) {
            cout << 0 << "\n";
            continue;
        }
        int min_ops = INT_MAX;
        int b_in_window = 0;
        for(int i = 0; i < cnt_a; i++) {
            if(s[i] == 'b') b_in_window++;
        }
        min_ops = min(min_ops, b_in_window);
        for(int i = cnt_a; i < n; i++) {
            if(s[i] == 'b') b_in_window++;
            if(s[i - cnt_a] == 'b') b_in_window--;
            min_ops = min(min_ops, b_in_window);
        }
        if(cnt_b > 0) {
            int a_in_window = 0;
            for(int i = 0; i < cnt_b; i++) {
                if(s[i] == 'a') a_in_window++;
            }
            min_ops = min(min_ops, a_in_window);
            for(int i = cnt_b; i < n; i++) {
                if(s[i] == 'a') a_in_window++;
                if(s[i - cnt_b] == 'a') a_in_window--;
                min_ops = min(min_ops, a_in_window);
            }
        }
        
        cout << min_ops << "\n";
    }
    
    return 0;
}