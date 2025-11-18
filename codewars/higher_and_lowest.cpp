#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

string highAndLow(string numbers){
  vector<int>a;
  int dg_val=0;
  for(char c:numbers){
    if(c!=' '){
    dg_val = c - '0';
    a.push_back(dg_val);
    }
  }
  cout<<to_string(*max_element(a.begin(),a.end()))<<" "<<to_string(*min_element(a.begin(),a.end()));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string numbers = "1 2 -3 4 5";
    highAndLow(numbers);
    return 0;
}