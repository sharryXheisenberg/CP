/* *  Author - Balerion_The_second  
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
    string p;
    cin >> p;
    string res = "NO"; 
    for(int i = 0; i < p.length(); i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            res = "YES"; 
            break;       
        }
    }  
    cout << res << en;
    return 0;
}