/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution{
    public:
        vector<string>topKFrequent(vector<string>& words,int k){
            unordered_map<string,int> freq;
            for(string& word:words){
                freq[word]++;
            }
            vector<pair<string,int>>vec;
            for(auto& it:freq){
                vec.push_back({it.first,it.second});
            }

            //sorting the vec using comparator

            auto lambda = [] (pair<string, int>& p1 , pair<string,int>& p2){   // comparator function
                if(p1.second==p2.second){   //if both pairs frequency is same then sort them lexicographically 
                    return p1.first < p2.first;  
                }
                return p1.second>p2.second;
            };
            sort(vec.begin(),vec.end(),lambda);
            int i  = 0;
            vector<string>res(k);
            while(i<k){
                res[i] = vec[i].first;
                i++;
            }
            return res;
        }
};
//TC - O(nlogn)
//SC - O(K) or O(N)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<string> words = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    int k = 4;
    vector<string>res = obj.topKFrequent(words,k);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}