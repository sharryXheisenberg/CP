#include<bits/stdc++.h>
using namespace std;

void sort(vector<vector<int>>&mat){
    for(auto &row:mat){
        sort(row.begin(),row.end());
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>mat = {
      {77, 11, 22, 3},
      {11, 89, 1, 12},
      {32, 11, 56, 7},
      {11, 22, 44, 33}};
    
    sort(mat);
    cout<<"[\n";
    for(auto &row:mat){
    cout<<" [";
    for(int i=0;i<row.size();i++){
        
        if(i>0) cout<<",";
        cout<<row[i]    ;
    }
    cout<<"]\n";

}
cout<<"]\n";

}