#include <vector>
#include<bits/stdc++.h>
using namespace std;


int findOdd(const vector<int>& numbers){
    int n = numbers.size();
    // int number = 0;
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[i]++;
    }
    for(auto it:freq){
        if(it.second%2!=0){
            return it.first;
        }
    }
    // return number;
}

int main() {
    vector<int>numbers = {0,1,0,1,0};
    int op = findOdd(numbers);
    cout<<op<<endl;
    return 0;
}
