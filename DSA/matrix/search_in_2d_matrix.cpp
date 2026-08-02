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

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int rows = mat.size();
    int cols = mat[0].size();
    int i = 0;
    int j = cols - 1;
    while (i < rows && j >= 0) {
        if (mat[i][j] == target) {
            return true;
        }
        if (mat[i][j] < target) {
            i++;
        } else {
            j--;
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> mat = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
    int target = 8; 
    bool isOk = searchMatrix(mat,target);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false";
    }
}