// https://leetcode.com/problems/odd-even-linked-list/
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if(head == null) return null;
        if(head.next == null) return head;

        ListNode head1 = head;
        ListNode head2 = head.next;
        
        ListNode t1 = head;
        ListNode t2 = head.next;

        while(t2 != null && t2.next != null){
            ListNode temp1 = t2.next;
            ListNode temp2 = temp1.next;
            t1.next = temp1;
            t2.next = temp2;
            t1 =t1.next;
            t2 = t2.next;
        }
        t1.next = head2;
        return head;


    }
}