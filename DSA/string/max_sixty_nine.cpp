/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num);
        int currnt_sm = 0;
        int maxNo =num;
        for(int i=0;i<str.length();i++){
            if(str[i]=='6') {
                str[i]='9' ;
                currnt_sm = stoi(str);
                maxNo= max(maxNo,currnt_sm);
                break;
            }
        }
        return maxNo;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int num = 966666;
    int s =  obj.maximum69Number(num);
    cout<<s<<en;
    return 0;
}