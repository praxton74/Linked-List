class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node*f=head->next;
        Node*s=head;
        while(f!=NULL)
        {
            f=f->next;
            if(f!=NULL)
            {
                f=f->next;
            }
            s=s->next;
        }
        return s->data;
    }
};
