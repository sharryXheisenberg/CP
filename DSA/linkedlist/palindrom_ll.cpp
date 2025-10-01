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

bool isPalindrome(ListNode* head) {
        int temp1=0;
        ListNode* temp = head;
        stack<int>st;
        while(temp !=nullptr){
            st.push(temp->data);
            temp=temp->next;
        }
        temp = head;

        while(!st.empty() && temp!=nullptr){
            temp1=st.top();
            st.pop();
            if(temp->data!=temp1){
                return false;
            }
            temp=temp->next;
        }
        return true;
        
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
     head->next->next = new ListNode(3);
     head->next->next->next = new ListNode(2);
     head->next->next->next->next = new ListNode(1);

    bool ok = isPalindrome(head);
    if(ok){
        cout<<"Yes palidrome"<<endl;
    }
    else{
        cout<<"No palindrome"<<endl;
    }
    return 0;
}
