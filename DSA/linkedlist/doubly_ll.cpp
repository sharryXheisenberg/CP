#include<bits/stdc++.h>
using namespace std;

//  singly ll implementation
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int d1 , Node* next1){
//         data = d1;
//         next = next1;
//     }

//     Node(int d1){
//         data=d1;
//         next = nullptr;
//     }

// };

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int d1,Node* next1 , Node* back1){
        data = d1;
        next = next1;
        back = back1;
    }

    Node(int d1){
        data = d1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next= temp;
        prev = temp;
    }
    return head;
}
Node* printDLL(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* insertAtTail(Node* head, int k){
    Node* tail = head;
    Node* newNode = new Node(k);
    if(head==nullptr){
        return newNode;
    }

    while(tail->next !=nullptr) { 
        tail=tail->next;
    }
    tail->next=newNode;
    newNode->back = tail;

    return head;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>arr = {12, 5, 8, 7, 4};
    Node* head = convertArrToDLL(arr);

    cout<<printDLL(head)<<endl;

    cout << endl << "Doubly Linked List After Inserting at the tail with value 10: " << endl;
    head = insertAtTail(head,10);
    printDLL(head);
    return 0;
}