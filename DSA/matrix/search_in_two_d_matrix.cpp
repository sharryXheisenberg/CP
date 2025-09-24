#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    bool searchInRow(vector<vector<int>>&mat ,int target , int row) {
        int n = mat[0].size();
        int st = 0,end = n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }else if(target>mat[row][mid]){
                st = mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>&mat,int target){
        int m = mat.size(); // no of rows
        int n = mat[0].size(); // no of cols

        int sr = 0 , er = m-1;
        while (sr<=er){
            int mid_row = sr+(er-sr)/2;
            if(target>=mat[mid_row][0] && target<=mat[mid_row][n-1]){
                return searchInRow(mat,target,mid_row);

            }else if(target>mat[mid_row][n-1]){
                sr=mid_row+1;
            }
            else{
                er=mid_row-1;
            }
            
        }
        return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>> mat ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    bool ok = obj.searchMatrix(mat,3);
    if(ok){
        cout<<"Yes there is an element";
    }
    else{
        cout<<"There is no element in the matrix"<<endl;
    }
    return 0;
}