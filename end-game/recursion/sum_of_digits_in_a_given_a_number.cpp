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
	int addDigits(int num){
        // reduce until single digit
		while(num>=10){
            int sum = 0;
            //normal sum 
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            // now set  num to new sum
            num = sum;
        }
        return num;
	}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int num = 529;
    int res = obj.addDigits(num);
    cout<<res<<en;
    return 0;
}