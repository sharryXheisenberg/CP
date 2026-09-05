/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define en endl
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            //first condition
            while(i<j && !(isVowel(s[i]))){
                i++;
            }
            //second condition
            while(i<j && !(isVowel(s[j]))){
                j--;
            }
            //third condition
            if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    string s = "IceCreAm";
    cout << obj.reverseVowels(s) << en; 
    
    return 0;
}