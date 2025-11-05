#include<bits/stdc++.h>
using namespace std;
#define en endl 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,x,k;
        cin>>n>>k>>x;
        long long min_sum = (k*(k+1))/2;
        long long max_sum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        if(x>=min_sum && x<=max_sum){
            cout<<"YES"<<en;
        }
        else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}

//tc-O(1)
//sc - O(1)