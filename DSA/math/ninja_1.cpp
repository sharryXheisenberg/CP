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

int digitProd(int num){
    int prod = 1;
    while(num>0){
        prod = prod * (num % 10) ;
        num/=10;
    }
    return prod;
}
int digitSum(int num){
    int sum = 0;
    while(num>0){
        sum =  sum + (num%10) ;
        num/=10;
    }
    return sum;
}
int findProductSumDifference(int n){
	int diff = digitProd(n) - digitSum(n);
    return diff;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int res = findProductSumDifference(41);
    cout<<res<<en;
    return 0;
}