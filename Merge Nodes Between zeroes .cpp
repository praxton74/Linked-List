/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) 
    {
        ListNode curr = head.next, prev = head;
        
        while(curr != null && curr.next != null)
        {
            if(curr.val != 0)
            {
                prev.val += curr.val;
            }
            else
            {
                prev.next = curr;
                prev = curr;
            }
            curr = curr.next;
        }
        
        prev.next = null;
        
        return head;    
    }
}
