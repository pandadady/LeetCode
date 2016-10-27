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
	/*
	功能：插入排序
	*/	
	ListNode* insertsort(ListNode* head) {
		ListNode dummpy(0);
		ListNode *nroot = &dummpy;
		nroot->next = head;
		while (head) {
			if (head->next&&head->next->val < head->val) {
				while (nroot->next->val<head->next->val) {
					nroot = nroot->next;
				}
				/*
				dummpy-4-5-3-2-1
				head=5
				*/
				ListNode *tmp = nroot->next;//保存4
				nroot->next = head->next;//dummpy连接3
				head->next = head->next->next;//5连接2
				nroot->next->next = tmp;//3连接4
				nroot= &dummpy;
			}
			else head = head->next;
		}
		return dummpy.next;

	}
	/*
	功能：归并排序
	*/
	ListNode* mergesort(ListNode* head) {
		if (!head||!head->next)return head;//注意这里
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast->next&&fast->next->next) {
			fast = fast->next->next;
			slow = slow->next;
		}
		slow = slow->next;
		slow->next = NULL;//到这里链表对折结束
		ListNode* mid = slow;
		ListNode* l1 = mergesort(head);
		ListNode* l2 = mergesort(mid);
		return mergelist(l1, l2);
	}
	/*
	功能：迭代查找
	*/
	ListNode* iteration_search(ListNode* head,int val) {
		ListNode* b = head;
		while (head&&head->val != val)head = head->next;
		return head;
	}
