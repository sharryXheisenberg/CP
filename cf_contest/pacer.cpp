#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> reqs(n);
        for(int i = 0; i < n; i++) {
            cin >> reqs[i].first >> reqs[i].second;
        }
        
        long long points = 0;
        int current_side = 0;
        int current_time = 0;
        
        for(int i = 0; i < n; i++) {
            int target_time = reqs[i].first;
            int target_side = reqs[i].second;
            
            int time_available = target_time - current_time;
            if(current_side == target_side) {
                int pairs = time_available / 2;
                points += pairs * 2;
            } else {
                if(time_available >= 1) {
                    points += 1; 
                    int remaining_time = time_available - 1;
                    int pairs = remaining_time / 2;
                    points += pairs * 2;
                }
            }
            current_side = target_side;
            current_time = target_time;
        }
        int remaining_time = m - current_time;
        points += remaining_time;
        
        cout << points << "\n";
    }
    return 0;
}