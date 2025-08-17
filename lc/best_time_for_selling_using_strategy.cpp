#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        int half = k / 2;
        long long original = 0;
        vector<long long> A(n), B(n);
        vector<long long> prefA(n + 1, 0), prefB(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            long long s = strategy[i];
            long long p = prices[i];
            original += s * p;

            A[i] = -s * p;          
            B[i] = (1 - s) * p;      
            prefA[i + 1] = prefA[i] + A[i];
            prefB[i + 1] = prefB[i] + B[i];
        }

        long long bestDelta = 0; 
        for (int s = 0; s + k <= n; ++s) {
            long long firstHalf  = prefA[s + half] - prefA[s];
            long long secondHalf = prefB[s + k]   - prefB[s + half];
            long long delta = firstHalf + secondHalf;
            if (delta > bestDelta) bestDelta = delta;
        }

        return original + bestDelta;
    }
};

int main() {
    Solution obj;

    vector<int> prices1 = {4, 2, 8};
    vector<int> strat1  = {-1, 0, 1};
    cout << obj.maxProfit(prices1, strat1, 2) << "\n"; 

    vector<int> prices2 = {5, 4, 3};
    vector<int> strat2  = {1, 1, 0};
    cout << obj.maxProfit(prices2, strat2, 2) << "\n"; 

    return 0;
}
