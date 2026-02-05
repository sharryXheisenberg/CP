/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    int maximumSwap(int num) {
        string ori_num = to_string(num);
        int n = ori_num.length();
        vector<int> lastIdx(10, -1);
        for(int i = 0; i < n; i++){
            lastIdx[ori_num[i] - '0'] = i;
        }
        for(int i = 0; i < n; i++){
            int currentDigit = ori_num[i] - '0';
            for(int d = 9; d > currentDigit; d--){ 
                if(lastIdx[d] > i){
                    swap(ori_num[i], ori_num[lastIdx[d]]);
                    return stoi(ori_num);
                }
            }
        }
        return num;
    }
};

// TC - O(n^2)
// SC - O(n)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int num1 = 2736;
    cout << "Input: " << num1 << " -> " << obj.maximumSwap(num1) << en;
        int num2 = 1993;
    cout << "Input: " << num2 << " -> " << obj.maximumSwap(num2) << en;

    return 0;
}