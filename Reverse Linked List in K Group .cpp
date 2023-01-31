class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        node*prev=NULL;
        node*curr=head;
        node*fut;
        int c=1;
        while(curr!=NULL && c<=k)
        {       
            fut=curr->next;
            curr->next=prev;
            prev=curr;;
            curr=fut;
            c++;
        }
        if(fut!=NULL)
        {
            head->next=reverse (fut,k);
        }
        
        return prev;
    }
};
 
