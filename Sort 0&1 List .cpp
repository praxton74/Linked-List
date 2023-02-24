ListNode* Solution::solve(ListNode* A)
{
    int zerocount =0;
    int onecount=0;
    ListNode* temp = A;
   
    while(temp!=NULL){
        if(temp->val == 0){
            zerocount++;
        }
        if(temp->val == 1){
            onecount++;
        }
        temp = temp->next ;
    }
    ListNode* temp1 = A;
    while(temp1!=NULL){
        if(zerocount != 0){
            temp1->val = 0;
            zerocount--;
        }
        else if(onecount !=0){
            temp1->val =1;
            onecount--;
        }
        temp1 = temp1->next;
    }
    return A;
}
 
