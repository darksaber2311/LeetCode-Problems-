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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(0);
    int sum = 0;
    int carry = 0;
    ListNode *res = head;
    while(l1!=nullptr||l2!=nullptr||carry!=0)
    {
        int val1 = (l1==nullptr)?0:l1->val;
        int val2 = (l2==nullptr)?0:l2->val;

        sum = (val1+val2+carry)%10;
        res->next = new ListNode(sum);
        res = res->next;
        carry = (val1+val2+carry)/10;
        l1 = (l1==nullptr)?nullptr:l1->next;
        l2 = (l2 == nullptr)? nullptr:l2->next;

    }
    res = head->next;
    return res;
    }    
};
