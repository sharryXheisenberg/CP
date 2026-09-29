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

class BankAccount{
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(string accntHolderName , double balance){
        this->accountHolderName = accntHolderName;
        this->balance = balance;
    }

    string getAccntNumber(){
        return accountHolderName;
    }

    void setAccntHolderName(string accntHolderName){
        this->accountHolderName = accntHolderName;
    }

    double getBalance(){
        return balance;
    }
    void withDraw(double amt){
        if(amt<balance){
            balance-=amt;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void deposit(double amt){
        if(amt>0){
            balance+=amt;
        }else{
            cout<<"Deposit should be greater than zero"<<endl;
        }
    }


};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    BankAccount obj1("Saurabh",10000);

    cout<<"Account Number" << obj1.getAccntNumber()<<endl;
    cout<<"Account balance"<< obj1.getBalance()<<endl;

    obj1.deposit(2000);
    cout<<"Updated balance"<<obj1.getBalance()<<endl;

    obj1.withDraw(2000);
    cout<<" balance after withdrawl" << obj1.getBalance()<<endl;
    return 0;
}