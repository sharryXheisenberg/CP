#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    bool modMatch(vector<int>&arr,int y){
        int l_idx = 0;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+=((arr[i]*arr[i+1]))*(arr[i+2]);
        }
        l_idx = sum%10;
        if(l_idx==y){
            return true;
        }
        else{
            return false;
        }
    }

};

int main() {
    int l_idx = 0;
    int sum = 0;
    vector<int>arr = {2,5,10,3};
    for(int i=0;i<arr.size();i++){
        sum+=((arr[i]*arr[i+1]))*(arr[i+2]);
    }
    l_idx = sum%10;
    cout<<sum<<endl;
    cout<<l_idx<<endl;
    // Solution obj;

    
    // int y = 0;
    // bool is = obj.modMatch(arr,y);
    // if(is){
    //     cout<<"Yes"<<endl;
    // }else{
    //     cout<<"No"<<endl;
    // }
    return 0;
}