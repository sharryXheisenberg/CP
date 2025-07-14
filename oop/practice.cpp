#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Encapsulation
// class BankAcc{
//     private:
//     int balance;

//     public:
    
//      BankAcc(int intialBalance){
//         if(intialBalance>0){
//             balance=intialBalance;
//         }
//         else{
//             balance = 0;
//         }

//     }

//     void deposit(int amt){
//         if(amt>0){
//             balance+=amt;
//         }
//         cout<<"Amount deposited"<<amt<<endl;
//     }
    
//     int getBalance() {
//         return balance;
//     }
//     void withdraw(int amt){
//         if(amt<=balance){
//             balance-=amt;
//             cout<<"Amount withdraw"<<amt<<endl;
//         }
//         else{
//             cout<<"Insufficient balance"<<endl;
//         }
        
//     }
// };


// int main() {
//     BankAcc obj(1000);

//     obj.deposit(500);
//     obj.withdraw(300);
//     cout << "Current Balance: " << obj.getBalance() << endl;
//     return 0;

// }

// Time Polymorphism

class Calc{
    public:
    int add(int a, int b){
        return a+b;

    }

    double add(double a , double b){
        return a+b;

    }
    int add(int a , int b , int c){
        return a+b+c;
    }

};
int main() {
    Calc obj;
    cout<<obj.add(2,3)<<endl;
    cout<<obj.add(3.3,4.1)<<endl;
    cout<<obj.add(1,2,3)<<endl;
    return 0;
}