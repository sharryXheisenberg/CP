#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d1,Node* next1){
        data = d1;
        next = next1;
    }

    Node(int d1){
        data = d1;
        next = nullptr;
    }

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>a={2,5,8,7};
    Node*y = new Node(a[0]);
    cout<<y<<endl;
    cout<<y->data<<endl;

}