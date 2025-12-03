/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#include <algorithm>
#define ll long long
#define en endl
using namespace std;



class Solution {
public:

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>res(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i] >=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                res[i] = 0;
            }else{
                res[i] = st.top() - i; // difference in days
            }
            st.push(i);
        }
        return res;

        // Brute force approach by using two for loops

        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(temperatures[i]<temperatures[j]){
        //             res.push_back(j-i);
        //         }
        //     }
        // }

       
    }
};

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums= {73,74,75,71,69,72,76,73};
    vector<int>res = obj.dailyTemperatures(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}