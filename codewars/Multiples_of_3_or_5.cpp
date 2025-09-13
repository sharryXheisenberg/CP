#include<bits/stdc++.h>
using namespace std;


int solution(int number) 
{
  int sum=0;
  int k=1;
  while(k<number){
    if((k%3==0) && (k%5==0)){
        sum+=k;
    }
    else if(k%3==0){
        sum+=k;
    }else if(k%5==0){
        sum+=k;
    }
    k++;
  }
  return sum;
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int op;
    cin>>op;
    cout<<solution(op)<<endl;
    return 0;

}