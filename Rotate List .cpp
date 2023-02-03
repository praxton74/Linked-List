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
    ListNode* rotateRight(ListNode* head, int k)
    {
        vector<int>ans;
        if(head==nullptr || head->next==nullptr || k==0)
        {
            return head;
        }
        ListNode*p=head;
        int l=1;
        while(p->next!=nullptr && p!=nullptr)
        {
            p=p->next;
            l++;
        }
        p->next=head;

        k=k%l;
        k=l-k;
        while(k--)
        {
            p=p->next;
        }
        head=p->next;
        p->next=nullptr;

        return head;
    }
};
