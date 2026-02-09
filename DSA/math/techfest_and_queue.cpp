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

class Solution{
public:

    int getPoints(int x){
        int points = 0;
        int temp = x;
        for(int i=2;i<=sqrt(temp);i++){
            while(x%i==0){
                points+=1;
                x=x/i;
            }
        }
        if(x!=1){  // x is itself prime number  like 11 and is not divisible by any other number 
            points+=1;
        }
        return points;
    }
    int sumOfPowers(int a,int b){
        int res = 0;
        while(a<=b){
            res+=getPoints(a);
            a++;
        }
        return res;
    } 
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int a = 9;
    int b = 12;
    int res = obj.sumOfPowers(a,b);
    cout<<res<<en;
    return 0;
}