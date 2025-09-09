#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((i==n-j) && (i%2!=0 && j%2!=0)){
                    return {i,j};
                }
            }
        
        }
    }
};

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    Solution obj;
    vector<int>res = obj.getNoZeroIntegers(11);
    pair<int,int>ok = {res[0],res[1]};
    cout<<ok.first<<" "<<ok.second<<endl;
    return 0;

}