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
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res;
        for(int i=0;i<letters.size();i++){
            if(target<letters[i]){
                res = letters[i];
                break;
            }else{
                res = letters[0];
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<char>letters = {'x','x','y','y'};
    char tar = 'z';
    char res = obj.nextGreatestLetter(letters,tar);
    cout<<res<<en;
    return 0;
    
    
}