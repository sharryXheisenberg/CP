#include<bits/stdc++.h>
using namespace std;

int rental_car_cost(int d){
  int total = (40*d);
  if(d>=3 && d<7){
    total =  (40*d - 20);
 }
  else if(d>=7){
    total = (d*40 - 50);
  }
  return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int o = rental_car_cost(8);
    cout<<o<<endl;
    return 0;
}