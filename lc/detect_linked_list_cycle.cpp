#include<bits/stdc++.h>
using namespace std;
#define en endl


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=nullptr){
            
            slow=slow->next;
            fast = fast ->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}