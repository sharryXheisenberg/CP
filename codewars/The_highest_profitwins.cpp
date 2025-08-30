#include <utility>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


pair<int, int> min_max(const vector<int>& arr) {
    if (arr.size() == 1) return {arr[0], arr[0]};
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    return {mn, mx};
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr = {2334454,5};
    pair<int,int>k = min_max(arr);
    cout<<k.first<<" "<<k.second;
}

 