#include<bits/stdc++.h>
using namespace std;



int main(){

    // defining matrix(with hard coded values)
    // int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<vector<int>>matr1 = {{1,2,3},{4,5,6},{7,8,9}} // here rows and columns are equal in number so we can print them with the <size()


    // but here rows = 3 and column = 4 so we have to take j < matr[0].size();
    vector<vector<int>>matr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<matr.size();i++){
        for(int j=0;j<matr[0].size();j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }



    // print the first row and first column of the matrix 

    vector<vector<int>>matrix= {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}};

    cout<<"first row elements"<<endl;
    for(int i=0;i<matrix[0].size();i++){
        cout<<matrix[0][i]<<" ";
    }

    
    cout<<"First column elements"<<endl;
    for(int j=0;j<matrix.size();j++){
        cout<<matrix[j][0]<<" ";
    }

    // print third column and third row elements

    cout<<"third row elements"<<endl;
    for(int i=0;i<matrix[2].size();i++){
        cout<<matrix[2][i]<<" ";
    }

    //print third column
    cout<<"third column elements"<<endl;
    for(int j=0;j<matrix.size();j++){
        cout<<matrix[j][2]<<endl;
    }
    return 0;

}