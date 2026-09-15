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
		bool checkPrime(int num){
            // 1 or less than that is not prime number
            if(num<=1)
                return false;
            if(num<=3){
                return true;  // 2 and 3 are prime numbers'
            }
            if(num %2 ==0 || num % 3 ==0){
                return false;
            }
            for(int i=5;i*i<=num;i+=6){
                if(num%i==0 || num % (i+2)==0){
                    return false;
                }
            }
            return true;
		}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 5;
    bool dawg = obj.checkPrime(n);
    if(dawg){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}