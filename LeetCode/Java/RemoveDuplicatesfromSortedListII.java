// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null){
            return head;
        }
        ListNode temp = head;
        ListNode newhead = new ListNode(0);
        ListNode t1 = newhead;
        int curr = -99999;
        while(temp.next !=null){
            if(temp.val != curr && temp.val != temp.next.val){
                ListNode adn = new ListNode(temp.val);
                t1.next = adn;
                t1 = t1.next;
            }
            else if(temp.val == temp.next.val){
                curr = temp.val;
            }
            temp = temp.next;
        }
        if(temp.val != curr){
            ListNode adn = new ListNode(temp.val);
            t1.next = adn;
            t1 = t1.next;
        }
        return newhead.next;
    }
}