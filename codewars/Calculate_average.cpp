#include <vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double calcAverage(const vector<int>& values){
  int n = values.size();
  if(n==0){
    return 0;
  }
  double sum = 0;
  for(int i=0;i<n;i++){
    sum+=values[i];
  }
  return (double) {(sum)/(n)};
  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>values = {1,2,3,4};
    int avg = calcAverage(values);
    cout<<avg<<endl;
    return 0;
}