#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

// brute force approach 
    int maxArea(vector<int>& height) {
        int max_water = INT_MIN;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int wdth = j - i;
                int min_height = min(height[i],height[j]);
                int area = (wdth*min_height);
                max_water = max(max_water,area);
            }
        }
        return max_water;
    }


// optimal approach 
 int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n-1;
        int max_water = 0;

        while(lp<rp){
            int wdth = rp- lp;
            int min_height = min(height[lp],height[rp]);
            int area = (wdth * min_height);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
            max_water = max(max_water,area);
        }
        return max_water;
    }
};



int main() {
    Solution obj;
    vector<int>height = {1,1};
    int ko = obj.maxArea(height);
    cout<<ko<<endl;
    return 0;
}