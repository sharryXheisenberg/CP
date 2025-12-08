/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int &i:asteroids){
            // collision condition
            while(!st.empty() && i < 0 && st.top()>0){
                int sum = i + st.top();
                if(sum<0){
                    st.pop();
                }else if(sum>0){   // greater magnitiude 
                    i = 0;
                }else{   // equal sum
                    st.pop();
                    i =0;
                }
            }
            if(i!=0){
                st.push(i);
            }
        }
        int s = st.size();
        vector<int>res(s);
        int i = s-1;
        while(!st.empty()){
            res[i] = st.top();
            st.pop();
            i--;
        }
        return res;
    }
};

// TC - O(n)
// SC - O(n)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>a = {3,5,-6,2,-1,4};
    vector<int>res = obj.asteroidCollision(a);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}