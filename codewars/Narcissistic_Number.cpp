#include<bits/stdc++.h>
using namespace std;

bool narcissistic(int value) {
    int num = 0;
    int fin = 0;
    int rem = value;
    int digits = 0, temp = value;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    while (value > 0) {
        num = value % 10;
        fin += pow(num, digits);  
        value /= 10;
    }
    return fin == rem ? true : false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int val = 1652 ;
    bool isOk = narcissistic(val);
    if(isOk){
        cout<<"Yes it is armstrong number!";
    }else{
        cout<<"No";

    }
    return 0;
}