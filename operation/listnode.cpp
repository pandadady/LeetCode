	//链表结构
	struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	};
	/*
	功能：翻转链表
	*/
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
	/*
	功能：返回链表中间节点
	*/
	ListNode* fast_slow(ListNode* root) {
		if (!root)return NULL;
		ListNode* fast = root;
		ListNode* slow = root;
		while (fast->next&&fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow->next;
	}
	/*
	功能：将2个有序链表合并
	*/
	ListNode* mergelist(ListNode* l1, ListNode* l2) {
		ListNode dummpy(0);
		ListNode* root = &dummpy;
		while (l1&&l2) {
			if (l1->val < l2->val) {
				root->next = l1;
				l1 = l1->next;
			}
			else {
				root->next = l2;
				l2 = l2->next;
			}
			root = root->next;
		}
		if (l1 && !l2) root->next = l1;
		if (!l1 && l2) root->next = l2;
		return dummpy.next;
	}
