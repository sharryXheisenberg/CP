#include<bits/stdc++.h>
using namespace std;



void add(vector<vector<int>>& mat1 , vector<vector<int>>&mat2 , vector<vector<int>>&res) {

    int m = mat1.size(); // columns or size
    int n = mat1[0].size();// rows

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i=0;i<res.size();i++){
        for(int j = 0 ;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}


void sub(vector<vector<int>>&m1 , vector<vector<int>>&m2,vector<vector<int>>&rs1){
    int row = m1.size();
    int col = m1[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            rs1[i][j] = m1[i][j] - m2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<rs1[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>mat1 = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
    vector<vector<int>>mat2 = {{10,11,12,21},{13,14,15,22},{16,17,18,23}};

    vector<vector<int>>m1 = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
    vector<vector<int>>m2 = {{10,11,12,21},{13,14,15,22},{16,17,18,23}};
    int row = mat1.size();
    int col = mat1[0].size();

    vector<vector<int>>res(row , vector<int>(col));


    // add(mat1,mat2 , res);
    vector<vector<int>>rs1(row,vector<int>(col));
    sub(m1,m2,rs1);

    return 0;

}