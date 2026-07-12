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

class Solution {
public:
    int timeToSeconds(string timeStr) {
        int hh = stoi(timeStr.substr(0, 2));
        int mm = stoi(timeStr.substr(3, 2));
        int ss = stoi(timeStr.substr(6, 2));
        return (hh * 3600) + (mm * 60) + ss;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int startTotal = timeToSeconds(startTime);
        int endTotal = timeToSeconds(endTime);
        return endTotal - startTotal;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string starrtTime = "01:00:00";
    string endTime = "01:00:25";
    int res = obj.secondsBetweenTimes(starrtTime , endTime);
    cout<<res<<en;
    return 0;
}