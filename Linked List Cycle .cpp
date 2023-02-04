class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node*f=head;
        Node*s=head;
        
        while(f!=NULL && s!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
            {
                return true;
            }
        }
        return false;
    }
};
