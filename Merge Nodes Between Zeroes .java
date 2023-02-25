class Solution {
    public ListNode mergeNodes(ListNode head) 
    {
        ListNode curr = head.next, prev = head;
        
        while(curr != null && curr.next != null){
            if(curr.val != 0){
                prev.val += curr.val;
            }
            else{
                prev.next = curr;
                prev = curr;
            }
            curr = curr.next;
        }
        
        prev.next = null;
        
        return head;    
    }
}
