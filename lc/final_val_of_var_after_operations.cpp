#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                val-=1;
            }else if(operations[i] == "++X" || operations[i]=="X++"){
                val+=1;
            }
        }
        return val;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<string>operations = {"X++","++X","--X","X--"};
    int op = obj.finalValueAfterOperations(operations);
    cout<<op<<endl;
    return 0;

}