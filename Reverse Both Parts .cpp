Node *reverse(Node *head, int k)
    {
        // code here
        
        Node *prev=NULL;
        Node *curr=head;
        Node *fut;
        int c=0;
        while(curr!=NULL)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
            c++;
        }
        Node* temp=prev;
        int l=c-k-1;
        while(l--)
        {
            temp=temp->next;
        }
        Node*ans=temp->next;
        head->next=prev;
        temp->next=NULL;
        return ans;
    }
