#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }   
        vector<long long> odd_fields, even_fields;
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 1) {
                odd_fields.push_back(a[i]);
            } else {
                even_fields.push_back(a[i]);
            }
        }
        if(odd_fields.empty()) {
            cout << 0 << "\n";
            continue;
        }
        sort(odd_fields.begin(), odd_fields.end());
        long long total = 0;
        for(long long x : even_fields) {
            total += x;
        }
        int odd_count = odd_fields.size();
        int fields_we_can_cut = (odd_count + 1) / 2;  
        sort(odd_fields.rbegin(), odd_fields.rend());
        for(int i = 0; i < fields_we_can_cut; i++) {
            total += odd_fields[i];
        }
        
        cout << total << "\n";
    }
    
    return 0;
}