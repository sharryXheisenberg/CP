/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> freq;
        int left = 0;
        int max_len = 0;    
        for (int right = 0; right < s.length(); right++) {
            freq[s[right]]++;
            while (freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;      
            }
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "bcbbbcba";
    cout << obj.maximumLengthSubstring(s) << en; // Output should be 4
    
    return 0;
}