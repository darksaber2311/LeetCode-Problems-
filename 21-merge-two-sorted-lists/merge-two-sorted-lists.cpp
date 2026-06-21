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
        ListNode* res = new ListNode(0);
        ListNode *head = res;
        while(list1!=nullptr||list2!=nullptr)
        {   
            if (list1 == nullptr && list2!=nullptr)
            {
                res->next = list2;
                return head->next;
            }
            else if(list1!=nullptr && list2 == nullptr)
            {
                res->next = list1;
                return head->next;
            }
            if(list2->val<=list1->val)
            {
                res->next = new ListNode(list2->val);
                res = res->next;
                list2 = list2->next;

            }
            else if(list2->val > list1->val)
            {
                res->next = new ListNode(list1->val);
                res = res->next;
                list1 = list1->next;

            }
        }
        return head->next;
    }
};