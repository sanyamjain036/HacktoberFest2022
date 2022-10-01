int getDecimalValue(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
		// to find length
        while(temp) {
            temp = temp->next;
            size++;
        }
        size--;
        temp = head;
        int res = 0;
        while(temp != NULL && size>=0) {
            res += temp->val*(1<<size);
            temp = temp->next;
            size--;
        }
        return res;
    }