/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;
class StockSpanner {
public:
    stack<pair<int,int>>st;  //pair of price and span

    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;  //all prices span is 1
        while(!st.empty() && st.top().first<=price){
            span = span + st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;        
    }
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}