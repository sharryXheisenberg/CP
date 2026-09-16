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

struct Student{
    string name ;
    int score;
};
// global / regular function
bool myComparator(const int& a1, const int& b2){
    return a1 > b2; // descending order 
}


// custom comparator
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>nums1 = {5,1,9,3};
    sort(nums1.begin(),nums1.end(), [](const int& a , const int& b){
        return a>b;  // descending order 
        // return a<b; // for ascending order by default 
    });
    vector<int> a = {4,2,6,3};
    sort(a.begin(),a.end(),myComparator);
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    // return 0;

    vector<Student>stds = {
        {"Alice",85},
        {"Bob",54},
        {"CJ",95},
        {"Dom",95}
    };

    sort(stds.begin(),stds.end(), [](const Student& a, const Student& b){
        if(a.score == b.score){
            return a.name<b.name; // alphabetically first name will appear 
        }
        return a.score>b.score; // sorting in descending order 
    });

    for(const auto&s : stds){
        cout<<s.name<<" "<<s.score<<"\n";
    }
    return 0;
}