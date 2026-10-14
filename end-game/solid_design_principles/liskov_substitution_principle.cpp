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

class Notification{
    public:
        virtual void sendNotification(){
            cout<< "Notification sent" << endl;
        }

        virtual ~Notification(){}
};

class EmailNotification : public Notification{
public:
    void sendNotification() override{
        cout<<"Email Notification sent" <<endl;
    }
};

class TextNotification : public Notification{
public:
    void sendNotification() override{
        cout<<"Text notification sent"<<endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Notification* notification = new EmailNotification();
    delete notification;
    return 0;

}