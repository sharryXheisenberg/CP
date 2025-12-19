/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;


// here greedy idea is that sort the Xend's ballons end points in increasing order so if we get element like points[i][0]<=arrowEnd then skip to next element and if condition not follows then increase count and makes that point[i][1] = newEndPoint
class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) return 0;
        sort(points.begin(), points.end(), compare);
        int cnt = 1;
        int end = points[0][1]; 
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > end) {
                cnt++;
                end = points[i][1]; 
            } 
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>> points = {{10,16},{2,8},{1,6},{7,12}};
    int op = obj.findMinArrowShots(points);
    cout << op << endl;
    return 0;
}