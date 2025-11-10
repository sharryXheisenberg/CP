#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int ops = 0;
        if(num1==num2 && num1!=0){
            return 1;
        }
        while(num1!=0 && num2!=0){
            if(num1>=num2){
                num1-=num2;
                
            }else if(num2>num1){
                num2-=num1;
            }
            ops++;
            
        }
        return ops;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int num1,num2;
    cin>>num1>>num2;
    int ops = obj.countOperations(num1,num2);
    cout<<ops<<en;
    return 0;
}