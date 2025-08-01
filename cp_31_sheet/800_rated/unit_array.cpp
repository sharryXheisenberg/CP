#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int pos_one = 0, neg_one = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == -1) neg_one++;
            else pos_one++;
        }

        int operations = 0;
        while(pos_one < neg_one){
            neg_one--;
            pos_one++;
            operations++;
        }

        if(neg_one % 2 != 0){
            operations++;
        }

        cout << operations << '\n';
    }

    return 0;
}
