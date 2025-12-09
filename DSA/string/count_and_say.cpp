/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution{
    public:
        string countAndSay(int n){
            if(n==1) return "1";

            string say = countAndSay(n-1);
            string res = "";
            for(int i=0;i<say.length();i++){   // O(n)
                char ch = say[i];
                int cnt = 1;
                while(i<say.length()-1 && say[i] == say[i+1]){  // O(n-1)
                    cnt+=1;
                    i++;
                }
                res+=to_string(cnt) + string(1,ch);  //O(1) const
            }
            return res;
        }

};
//TC - O(n)
//SC - O(1)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 4;
    string res = obj.countAndSay(n);
    cout<<res<<en;
    return 0;
}