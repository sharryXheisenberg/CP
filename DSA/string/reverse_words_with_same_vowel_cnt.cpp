/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countVowelsInRange(string &s, int start, int end) {
        int cnt = 0;
        for (int i = start; i < end; i++) {
            char ch = s[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                cnt++;
        }
        return cnt;
    }

    string reverseWords(string s) {
        string parivontel = s; 
        int n = s.length();
        
        int firstWordEnd = 0;
        while(firstWordEnd < n && s[firstWordEnd] != ' ') {
            firstWordEnd++;
        }
        
        int targetCnt = countVowelsInRange(s, 0, firstWordEnd);
        
      
        int i = firstWordEnd + 1; 
        
        while (i < n) {
            int j = i;
            
            while(j < n && s[j] != ' ') {
                j++;
            }
            
            if (countVowelsInRange(s, i, j) == targetCnt) {
    
                reverse(s.begin() + i, s.begin() + j);
            }
            
            i = j + 1;
        }
        
        return s;
    }
};

int main() {
    Solution obj;
    cout << obj.reverseWords("cat and mice") << endl;
    return 0;
}