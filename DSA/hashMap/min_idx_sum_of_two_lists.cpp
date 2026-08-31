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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> list1_map;
        for (int i = 0; i < list1.size(); i++) {
            list1_map[list1[i]] = i;
        }  
        vector<string> result;
        int min_sum = INT_MAX;
        for (int j = 0; j < list2.size(); j++) {
            if (list1_map.count(list2[j])) {
                int i = list1_map[list2[j]];
                int current_sum = i + j;
                if (current_sum < min_sum) {
                    min_sum = current_sum;
                    result.clear();
                    result.push_back(list2[j]);
                } 
                else if (current_sum == min_sum) {
                    result.push_back(list2[j]);
                }
            }
        }
        return result;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<string> list1 = {"happy", "sad", "good"};
    vector<string> list2 = {"sad", "happy", "good"};
    
    vector<string> res = obj.findRestaurant(list1, list2);
    for (const string& s : res) {
        cout << s << " ";
    }
    cout << en;
    
    return 0;
}