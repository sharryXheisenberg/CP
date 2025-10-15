#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while(curr!=nullptr && curr->next!=nullptr){
            if(curr->val == curr->next->val){
                ListNode* nxt_nxt = curr->next->next;
                curr->next = nxt_nxt;
            }else{
                curr=curr->next;
            }
           
        }
        return head;
    }

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}