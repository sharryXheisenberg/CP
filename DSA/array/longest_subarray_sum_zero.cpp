#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr) {
    unordered_map<int,int> mp;
    int prefixSum = 0;
    int longest = 0;

    for(int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if(prefixSum == 0) {
            longest = max(longest, i + 1); 
        }

        if(mp.find(prefixSum) != mp.end()) {
            longest = max(longest, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i; 
        }
    }
    return longest;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> res = {1, 3, -1, 4, -4};
    int ok = LongestSubsetWithZeroSum(res);
    cout << ok << endl;
    return 0;
}
