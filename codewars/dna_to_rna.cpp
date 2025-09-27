#include <string>
#include<bits/stdc++.h>
using namespace std;

string DNAtoRNA(string dna){
  string res;
  for(int i=0;i<dna.size();i++){
    if(dna[i]=='T'){
      dna[i]='U';
    }
  }
  return dna;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string dna;
    cin>>dna;
    cout<<DNAtoRNA(dna);
    return 0;
}