/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>res;
        res.reserve(n);
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                res.push_back("FizzBuzz");
            }
            else if(i%3==0){
                res.push_back("Fizz");
            }
            else if(i%5==0){
                res.push_back("Buzz");
            }else{
                res.push_back(to_string(i));
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 15;
    vector<string>res = obj.fizzBuzz(n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}