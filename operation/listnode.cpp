ListNode* fast_slow(ListNode* root) {
		if (!root)return NULL;
		ListNode* fast = root;
		ListNode* slow = root;
		while (fast->next&&fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
