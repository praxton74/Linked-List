class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* prev=NULL;
        Node*curr=head;
        Node*fut;
        while(curr!=NULL)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
        
    }
    
};
