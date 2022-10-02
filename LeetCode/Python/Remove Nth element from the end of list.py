class Solution:
    def length(self,count,head):
        temp = head
        while temp:
            count += 1
            temp = temp.next
        return count
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count_node = self.length(0,head)-n
        if count == 1:
            return None
        i=0
        temp = head
        while i<count_node-1:
            i += 1
            temp = temp.next
        
        if count_node == 0:
            head = head.next
        else: 
            temp.next = temp.next.next
        return head
        
