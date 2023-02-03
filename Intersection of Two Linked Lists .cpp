int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    if(head1==NULL)
    return NULL;
    else if(head2==NULL) 
    return NULL;
    Node*p1,*p2;
    p1=head1;
    p2=head2;
    
    while(p1!=p2)
    {
        p1=(p1==NULL)?head2:p1->next;
        p2=(p2==NULL)?head1:p2->next;
    }
    return p1->data;
}
 
