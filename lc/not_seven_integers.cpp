#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    vector<int>sumOfSeven(int n){
        for(int i=1;i<n;++i){
            int j=n-i;
            if(isSevenInThere(i) && isSevenInThere(j)){
                return {i,j};
            }
        }
        return {};
    }

    private:
    bool isSevenInThere(int x){
        while(x>0){
            if(x%7==0) return false;
            x/=10;
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>res = obj.sumOfSeven(7);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;

}