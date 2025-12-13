/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int,int>ok ;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            ok[arr[i]]++;
        }
        for(auto &it:ok){
            int lk = it.second;
            if(st.find(lk)!=st.end()) return false;
            st.insert(lk);
        }

        // approach 2 
        vector<int>res(2001,0);
        for(int &x:arr){
            res[x+1000]++;
        }
        sort(res.begin(),res.end());
        for(int i=1;i<2001;i++){
            if(res[i]!=0 && res[i] == res[i-1]) return false;
        }
                return true;
            }
        };

        int main(){
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            Solution obj;
            vector<int>arr = {1,2,2,1,1,3};
            bool isOk = obj.uniqueOccurrences(arr);
            if(isOk){
                cout<<"true"<<en;
            }else{
                cout<<"false";
            }
            return 0;
        }