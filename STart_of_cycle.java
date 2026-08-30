/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        // ListNode temp=head;
        ListNode slow=head,fast=head;
        ListNode prev=head;

        if(head == null || head.next==null) return null;

        while(fast != null && fast.next != null){
            slow=slow.next;
            fast=fast.next.next;
            // prev=fast;

            if(slow==fast){
              while(slow != prev){
                prev=prev.next;
                slow=slow.next;
              }
              return prev;
            }
        }
        return null ;

    }
}
