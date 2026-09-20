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

    bool isPrime(int x){
        if(x<=1) return false;
        if (x==2 || x==3) return true;
        if(x%2==0 || x%3==0) return false;

        for(int i = 5;i*i<=x;i+=6){
            if(x%i==0 || x%(i+2)==0){
                return false; // 6k , 6K+1
            }
        }
        return true;
    }
    bool isSumOfTwoPrimes(int n) {
       // first a give number itself is prime number then it cannot express as sum of two prime numbers 
       if(n<4) return false;
       //case a given number is odd it for some numbers it can be solely present as sum of two prime numbers but not for always
       if(n%2==0) return true;
       // every even integer can be expressed as sum of two prime numbers 
       
       // odd number   // 2 + (n-2)
       return isPrime(n-2);

    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 74;
    bool isOk = obj.isSumOfTwoPrimes(n);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;   
}