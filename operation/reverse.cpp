ListNode* updown(ListNode* root) {
		ListNode* next = NULL;
		ListNode* pre = NULL;
		while (root) {
			next = root->next;
			root->next = pre;
			pre = root;
			root = next;
		}
		return pre;
	}
