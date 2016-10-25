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
