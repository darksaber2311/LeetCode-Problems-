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
    int pairSum(ListNode* head) {
     ListNode* curr = head;
     int count = 0 ;  
     vector<int> v;
     while(curr!=nullptr)
     {
        v.push_back(curr->val);
        curr = curr->next;
        count++;
     }
     int p=0;
     int sum=0;
     int q = count-1;   
     int res = INT_MIN;

     while(p<=q)
     {
        sum = v[p]+v[q];
        res = max(res,sum);
        p++;
        q--;
     }
    return res;

    }
};