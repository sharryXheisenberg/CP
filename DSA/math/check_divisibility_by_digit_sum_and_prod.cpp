/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution {
public:

    int digitProd(int num){
        int prod = 1;
        while(num){
            prod = num%10 * prod;
            num/=10;
        }
        return prod;
    }

    int digitSum(int num){
        int sum = 0;
        while(num){
            sum = num%10 + sum;
            num/=10;
        }
        return sum;
    }

    bool checkDivisibility(int n) {
        int div = digitProd(n) + digitSum(n);
        if(n % div ==0 ){
            return true;
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 99;
    bool isOK = obj.checkDivisibility(n);
    if(isOK){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}