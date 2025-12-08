/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution{
    public:

    bool checkFreq(string &s){
        vector<int>freq(26);
        for(char &ch:s){
            freq[ch-'a']++;

            if(freq[ch-'a']>1) return true;
        }
        return false;
    }

    bool buddyStrings(string s , string goal){
        if(s.length()!=goal.length()) return false;

        if(s==goal){
            return checkFreq(s);
        }

        vector<int>indices;   // O(2) size
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i]){
                indices.push_back(i);
            }
        }
        if(indices.size()!=2){
            return false;
        }
        swap(s[indices[0]] , s[indices[1]]);   //O(2)
        
        return s == goal;

    }
};

//TC - O(n)
//SC - O()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "aa";
    string t = "aa";
    bool isOk = obj.buddyStrings(s,t);
    if(isOk){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}