
#include<bits/stdc++.h>
using namespace std;

unsigned int number(const vector<pair<int, int>>& busStops){
  int first =0;
  for(auto s:busStops){
    first+=s.first;
    first-=s.second;
  }
    return first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> busStops = {{10,0},{3,5},{5,8}};
    int o = number(busStops);
    cout<<o<<endl;
    return 0;

}