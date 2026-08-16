/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;


int minimumRotations(int n, string s)
{
	string dawg = s+s;
    return dawg.find(s,1);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 5;
    string s="aabb";
    cout<<minimumRotations(n,s)<<en;
    return 0;
}