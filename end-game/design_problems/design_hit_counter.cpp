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

class HitCounter {

private:
    queue<int>hits;
public:
    HitCounter() {
    // default constructor keep as it is  
    }
    void hit(int timestamp) {
        this->hits.push(timestamp);   
    }
    
    int getHits(int timestamp) {
        while(!this->hits.empty()){
            int diff = timestamp - this->hits.front();

            if(diff>=300){
                this->hits.pop();  // removed that hit which is older than 300s
            }
            else break;
        }
        return   this->hits.size();
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    HitCounter obj;
    obj.hit(1);
    obj.hit(2);
    obj.hit(300);
    cout<<obj.getHits(301)<<endl;
    return 0;
}