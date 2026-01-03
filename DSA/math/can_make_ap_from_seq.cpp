/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int min_ele = *min_element(arr.begin(),arr.end());
        int max_ele = *max_element(arr.begin(),arr.end());
        if((max_ele - min_ele)%(n-1)!=0){
            return false;
        }
        int d = (max_ele - min_ele)/(n-1);
        int i =0;
        while(i<n){
            int val = arr[i];
            if(val==(min_ele+i*d)){
                i++;
            }else{
                if((val-min_ele)%d!=0) return false;
                int j = (val - min_ele)/d;
                
                if(val==arr[j]){
                    return false;
                }
                swap(arr[i],arr[j]);
            }
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>arr = {1,2,4};
    bool res = obj.canMakeArithmeticProgression(arr);
    if(res){
        cout<<"true"<<en;
    }else{
        cout<<"false"<<en;
    }
    return 0;
}