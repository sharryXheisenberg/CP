#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int rem;
    while(t--){
        int x;
        cin>>x;
         int min_number = INT_MAX;
        while(x>0){
            rem=x%10;
            x/=10;
            min_number = min(min_number,rem);
        }
        cout<<min_number<<endl;
    }
    return 0;
}