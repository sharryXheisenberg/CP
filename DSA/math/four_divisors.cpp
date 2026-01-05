/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> findDivisors(int x) {
        int cnt = 0;
        int sum = 0;
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                if (i * i == x) {
                    cnt += 1;
                    sum += i;
                }
                else {   // taking two divisors pairs at a time 
                    cnt += 2;      //  so the cnt is 2    
                    sum += i;          
                    sum += (x / i);  
                }
            }
        }
        return {cnt, sum};
    }

    int sumFourDivisors(vector<int>& nums) {
        int total_sum = 0;
        for (int num : nums) {
            if(num == 0) continue;             
            pair<int, int> res = findDivisors(num); 
            if (res.first == 4) {
                total_sum += res.second;
            }
        }
        return total_sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {21, 4, 7};
    int res = obj.sumFourDivisors(nums);
    cout << res << endl;
    return 0;
}