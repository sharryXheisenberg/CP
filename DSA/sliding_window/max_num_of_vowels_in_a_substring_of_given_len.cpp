/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxVowels(string s, int k) {
        int current_cnt = 0;
        int max_cnt = 0;
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                current_cnt++;
            }
        }
        max_cnt = current_cnt;
        for(int i = k; i < s.length(); i++) {
            if(isVowel(s[i - k])) {
                current_cnt--;
            }
            if(isVowel(s[i])) {
                current_cnt++;
            }
            max_cnt = max(max_cnt, current_cnt);
        }

        return max_cnt;
    }
};
// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "aeiou";
    int k = 2;
    int op = obj.maxVowels(s, k);
    cout << op << endl;
    return 0;
}