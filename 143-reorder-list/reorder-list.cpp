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
    void reorderList(ListNode* &head) {
        ListNode* pointer1 = head;
        ListNode* pointer2 = head->next;
        ListNode* curr = head;
        while(curr->next!=nullptr && curr->next->next!=nullptr)
        {
            while(pointer2->next!=nullptr)
            {
                pointer2 = pointer2->next;
                pointer1 = pointer1->next;
            }
            ListNode* temp = nullptr;
            //pointer1->next = nullptr;
            temp = curr->next;
            curr->next = pointer2;
            pointer2->next = temp;
            pointer1->next = nullptr;
            curr = temp;
            pointer1 = curr;
            pointer2 = curr->next;

        }
        //return head;
    }
    ListNode* func(ListNode* &head)
    {
        reorderList(head);
        return head;
    }
};