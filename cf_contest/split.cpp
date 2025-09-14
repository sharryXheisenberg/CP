#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> freq;
        for(int x : a) {
            freq[x]++;
        }
        
        bool possible = true;
        for(auto& p : freq) {
            if(p.second % k != 0) {
                possible = false;
                break;
            }
        }
        if(!possible) {
            cout << 0 << "\n";
            continue;
        }
        int ans = 0;
        for(int l = 0; l < n; l++) {
            map<int, int> sub_freq;
            
            for(int r = l; r < n; r++) {
                sub_freq[a[r]]++;
                bool awesome = true;
                for(auto& p : sub_freq) {
                    int val = p.first;
                    int count_in_sub = p.second;
                    int total_count = freq[val];
                    int target_per_set = total_count / k;
                    if(count_in_sub > target_per_set) {
                        awesome = false;
                        break;
                    }
                }
                
                if(awesome) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}