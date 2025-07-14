#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long max_number = a[n-1];
        long long min_number = a[0];

        if(max_number == min_number){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            cout<<max_number<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}