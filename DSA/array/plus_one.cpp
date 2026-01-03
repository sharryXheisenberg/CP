/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits; 
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> digits = {9,8,7,6,5,4,3,2,1,0}; 
    vector<int> res = obj.plusOne(digits);
    for(int i : res){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}