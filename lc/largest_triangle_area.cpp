#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0.0;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    double area = 0.5 * abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<vector<int>> points1 = {{0,0},{0,1},{1,0},{0,2},{2,0}};
    cout << fixed << setprecision(5) << sol.largestTriangleArea(points1) << "\n"; // 2.00000

    vector<vector<int>> points2 = {{1,0},{0,0},{0,1}};
    cout << fixed << setprecision(5) << sol.largestTriangleArea(points2) << "\n"; // 0.50000

    return 0;
}
