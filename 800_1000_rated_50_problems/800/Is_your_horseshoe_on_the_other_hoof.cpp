/* 
 *  Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    unordered_set<int>st;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    cout<<(4-st.size())<<en;
   
    return 0;
}