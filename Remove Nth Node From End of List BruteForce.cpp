/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int cnt = 0;
        while(temp != nullptr)
        {
            cnt++;
            temp = temp->next;
        }
        n = cnt - n;
        if(n == 0)
        {
            ListNode *node = head;
            head = head->next;
            delete(node);
            return head;
        }
        --n;
        ListNode *dummy = head;
        while(n--)
        {
            dummy = dummy->next;
        }
        ListNode *del = dummy->next;
        dummy -> next = dummy->next->next;
        delete(del);
        return head;
    }
};