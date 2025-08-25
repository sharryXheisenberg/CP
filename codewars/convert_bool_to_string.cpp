#include <string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string boolean_to_string(bool b){
  string s;
  if(b){
    s = "true";
 }else{
    s = "false";
  }
  cout<<s<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    boolean_to_string(false);
    return 0;
}