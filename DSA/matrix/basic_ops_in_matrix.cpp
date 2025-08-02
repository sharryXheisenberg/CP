#include<bits/stdc++.h>
using namespace std;


    bool searchInMatrix(vector<vector<int>>x , int ele) {
        int n = x.size() , m = x[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(x[i][j]==ele){
                    return true;
                }
            }
        }   
        return false;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ele = 8;
    vector<vector<int>>x = {{ 0, 6, 8, 9, 11 },
            { 20, 22, 28, 29, 31 },
            { 36, 38, 50, 61, 63 },
            { 64, 66, 100, 122, 128 } };
    
    if(searchInMatrix(x,ele)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
return 0;

}