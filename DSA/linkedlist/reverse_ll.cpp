#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int d1,ListNode* next1){
        data = d1;
        next = next1;
    }
    ListNode(int d1){
        data = d1;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = NULL;

    while(temp!=nullptr){
        ListNode* front = temp->next;

        temp->next=prev;
        prev = temp;
        temp = front;

    }

    return prev;
}

void printLL(ListNode* head){
    ListNode* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    cout<<"Original playlist"<<endl;
    printLL(head);
    cout<<"-------------"<<endl;

    head  = reverseList(head);
    cout<<"Reverse LL"<<endl;
    printLL(head);
    return 0;
}