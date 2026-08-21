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
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            //ListNode* mid = slow;
            slow = slow->next;
        }
        ListNode* list2 = slow->next;
        //mid->next = nullptr;
        slow->next = nullptr;
        ListNode* curr = list2;
        ListNode* prev = nullptr;
       // ListNode* next = list2->next;
        while(curr!=nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
         

        }
        ListNode* pointer2 = prev;
        ListNode* pointer1 = head;
        while(pointer2!=nullptr)
        {
            ListNode* temp = pointer1->next;
            ListNode* temp2 = pointer2->next;
            pointer1->next = pointer2;
            pointer2->next = temp;
            pointer2 = temp2;
            pointer1 = temp;
        }

    }
    ListNode* func(ListNode* &head)
    {
        reorderList(head);
        return head;
    }
};