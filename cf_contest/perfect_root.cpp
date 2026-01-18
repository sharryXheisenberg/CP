/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll maxVal = 0;
        int currentMax = 0;
        ll currentSum = 0;  
        for(int k = 0; k < n; k++) {
            if(a[k] > currentMax) currentMax = a[k];
            currentSum += currentMax;
        }
        maxVal = currentSum;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
                currentMax = 0;
                currentSum = 0;
                for(int k = 0; k < n; k++) {
                    if(a[k] > currentMax) currentMax = a[k];
                    currentSum += currentMax;
                }
                if(currentSum > maxVal) {
                    maxVal = currentSum;
                }
                swap(a[i], a[j]);
            }
        }

        cout << maxVal << en;
    }
    return 0;
}