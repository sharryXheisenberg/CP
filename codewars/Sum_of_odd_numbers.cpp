#include <bits/stdc++.h>
using namespace std;

long long rowSumOddNumbers(unsigned n){
    long long first = 1LL * n * (n - 1) + 1; 
    long long sum = 0;
    for(unsigned i = 0; i < n; ++i) sum += first + 2LL * i;
    return sum;
}

int main(){
    cout << rowSumOddNumbers(2) << '\n'; // 8
}
