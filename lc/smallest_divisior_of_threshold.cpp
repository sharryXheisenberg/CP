#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int sumOfD(vector<int>&nums,int div){
	int sum=0;
	int n = nums.size();
	for(int i=0;i<n;i++){
		sum = sum + ceil((double)(nums[i])/(double)(div));
	}
	return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
     int low =1 , high = *max_element(nums.begin(),nums.end());
	 while(low<=high){
		 int mid = (low+high)/2;
		 if(sumOfD(nums,mid)<=threshold){
			 high = mid-1;
		}
        else{
			low = mid+1;
		}
	}
	return low;
    }
};

int main(){
    Solution obj;
    vector<int>nums = {44,22,33,11,1};
    int threshold = 5;
    int ko = obj.smallestDivisor(nums,threshold);
    cout<<ko<<endl;
    return 0;
}