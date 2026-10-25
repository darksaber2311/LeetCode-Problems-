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

    ListNode* merge(ListNode* node1,ListNode* node2)
    {
        ListNode* p1 = node1;
        ListNode* p2 = node2;
        ListNode* newNode = new ListNode(0);
        ListNode* res = newNode;
        while(p1!=nullptr && p2!= nullptr)
        {
            if(p1->val <= p2->val)
            {
                newNode->next = p1;
                p1 = p1->next;
                newNode = newNode->next;
            }
            else
            {
                newNode->next = p2;
                p2 = p2->next;
                newNode = newNode->next;
            }
        }
        if(p1)
        {
            while(p1!=nullptr)
            {
                newNode->next = p1;
                p1 = p1->next;
                newNode = newNode->next;
            }
        }
        if(p2)
        {
            while(p2!=nullptr)
            {
                newNode->next = p2;
                p2 = p2->next;
                newNode = newNode->next;
            }
        }
        return res->next;


    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //ListNode* newNode = nullptr;
        if(lists.empty())return nullptr; // basecase
        int k = lists.size();
        if(k == 1)return lists[0]; // basecase

        ListNode* merged = merge(lists[0],lists[1]);
        lists[0] = merged;
        for(int i = 1;i<k-1;i++)
        {
            lists[i] = lists[i+1];
        }
        lists.pop_back();
        ListNode* result = mergeKLists(lists);
        return result;
    }
};