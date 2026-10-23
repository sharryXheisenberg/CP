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

class RecommendationStrategy{
    public:
    virtual void getRecommendations() = 0;
    virtual ~RecommendationStrategy() {};
};
class RecentlyAdded : public RecommendationStrategy{
    public:
    void getRecommendations() override{
        cout<<"Showing trending content .. "<<en;
    }
};
class TrendinhNow: public RecommendationStrategy{
    public:
    void getRecommendations() override{
        cout<<" Showing trending content .."<<en;
    }
};

class GenreBased : public RecommendationStrategy{
public:
    void getRecommendations() override{
        cout<< " Showing content based on your favorite geners .."<<en;
    }
};

class RecommendationEngine{
    private:
        RecommendationStrategy* strategy;
    public:
        RecommendationEngine(RecommendationStrategy* strategy): strategy(strategy) {}
    void recommend(){
        strategy -> getRecommendations();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    RecommendationStrategy* strategy = new TrendinhNow();
    RecommendationEngine engine(strategy);
    engine.recommend();
    delete strategy;
    return 0;    
}
