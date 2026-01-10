/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n <= 2) return true;
        long long x0 = coordinates[0][0];
        long long y0 = coordinates[0][1];
        long long dx = coordinates[1][0] - x0;
        long long dy = coordinates[1][1] - y0;

        for (int i = 2; i < n; ++i) {
            long long xi = coordinates[i][0];
            long long yi = coordinates[i][1];
            if ((xi - x0) * dy != (yi - y0) * dx)
                return false;
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>>coordinates = {{1,1},{2,2},{3,4},{4,5},{5,6},{7,7}};
    bool isOK = obj.checkStraightLine(coordinates);
    if(isOK){
        cout<<"true"<<en;
    }
    else{
        cout<<"false"<<en;
    }
    return 0;

}