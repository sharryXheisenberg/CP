/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.length();
        int i = 0;
        while(i<n && directions[i]=='L'){
            i++;
        }
        int j = n-1;
        while(j>=0 && directions[j] == 'R'){
            j--;
        }
        int c = 0;
        while(i<=j){
            if(directions[i]!='S'){
                c+=1;
            }
            i++;
        }
        return c;
    }
};

// TC - O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "RLRSLL";
    int op = obj.countCollisions(s);
    cout<<op<<en;
    return 0;
}