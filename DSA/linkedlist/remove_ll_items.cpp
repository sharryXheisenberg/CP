#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;

        head->next = removeElements(head->next, val);

        if (head->val == val) {
            ListNode* temp = head->next;
            delete head;       
            return temp;
        }
        return head;
    }

    void printll(ListNode* head) {
        while (head != NULL) {
            cout << head->val << " ";
            head = head->next;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;

    // ✅ Proper linked list construction
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    cout << "Original List: ";
    obj.printll(head);
    cout << endl;

    // Remove all nodes with value 6 recursively
    head = obj.removeElements(head, 6);

    cout << "Updated List: ";
    obj.printll(head);
    cout << endl;

    return 0;
}
