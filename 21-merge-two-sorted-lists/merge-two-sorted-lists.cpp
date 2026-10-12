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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* resList = new ListNode(0);
        ListNode* temp = resList;
        ListNode* p = list1;
        ListNode* q = list2;

        while(p!=nullptr && q!=nullptr)
        {
            if(p->val < q->val)
            {
                temp->next = p;
                p = p->next;
                temp = temp->next;
            }
            else
            {
                temp->next = q;
                q = q->next;
                temp = temp->next;
            }
          
        }
          if(p == nullptr)
            {
                temp->next = q;
            
            }
            else if(q == nullptr)
            {
                temp->next = p;
               
            }
        return resList->next;
    }
};