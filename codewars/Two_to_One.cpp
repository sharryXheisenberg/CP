#include<bits/stdc++.h>
using namespace std;



class TwoToOne{
  public:
    static string longest(const string &s1, const string &s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        set<string>st1;
        set<string>st2;
        int len1=0;
        int len2=0;
        st1.insert(s1);
        st2.insert(s2);
        len1 = st1.size();
        len2 = st2.size();
        // if(len1>len2){
        //     return st2[0];
        // }


    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TwoToOne obj;



}