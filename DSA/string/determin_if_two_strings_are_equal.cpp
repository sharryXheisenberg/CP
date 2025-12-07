/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<int>freq1(26);
        vector<int>freq2(26);

        if(m!=n) return false;

        for(int i=0;i<m;i++){
            char ch1 = word1[i];
            char ch2 = word2[i];
            int idx1 = ch1 -'a';
            int idx2 = ch2 -'a';
            freq1[idx1]++;
            freq2[idx2]++;
        }
        // 1st point
        for(int i=0;i<26;i++){
            if(freq1[i]!=0 && freq2[i]!=0) continue;
            
            if(freq1[i] == 0 && freq2[i]==0) continue;
             
            return false;
            
        }
        // 2nd point match the freq;
        sort(begin(freq1) , end(freq1));
        sort(begin(freq2) , end(freq2));
        return freq1 == freq2 ;
        
    }
};

//TC - O(nlog(n))
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s1 = "abc";
    string s2 = "bca";
    bool isOK = obj.closeStrings(s1,s2);
    if(isOK){
        cout<<"Is they are equal"<<en;
    }else{
        cout<<"False they are not equal"<<en;
    }
    return 0;
}

