# LeetCode
这个库用于总结leetcode中遇到的习题
#常用数据结构习题总结
##1.线性表
###解决进度
No.|	Describition	| mark |
|  :------ |  :-------    |   :---------   |
|1 | Remove Duplicates from Sorted Array	|  |
|2 |	Remove Duplicates from Sorted Array II	 |  |
|3	|Search in Rotated Sorted Array	|  |
|4	|Search in Rotated Sorted Array II	|  |
|5	|Median of Two Sorted Arrays	|递归实现find kth|
| 6	|Longest Consecutive Sequence	|  |
| 7	|Two Sum	|Hash，夹逼均可|
| 8	|3Sum	|Hash法转换2sum|
| 9	|3Sum Closest	|Sort +夹逼法|
| 10|	4Sum	|Sort +夹逼法|
| 11|	Remove Element	| |
| 12|	Next Permutation	|公式|
| 13|	Permutation Sequence	|公式|
| 14|	Valid Sudoku	| |
| 15|	Trapping Rain Water | |	
| 16|	Rotate Image	| |
| 17|	Plus One	| |
| 18|	Climbing Stairs	|动态规划，s(n)=s(n-1)+s(n-2)|
| 19|	Gray Code	| |
| 20|	Set Matrix Zeroes	| |
| 21|	Gas Station	| |
| 22|	Candy	| |
| 23|	Add Two Numbers	| |
| 24|	Reverse Linked List II	|Swap，不好理解|
| 25|	Partition List	| |
| 26|	Remove Duplicates from Sorted List	| |
| 27|	Remove Duplicates from Sorted List II	| |
| 28|	Rotate List	| |
| 29|	Remove Nth Node From End of List	| |
| 30|	Swap Nodes in Pairs	| 递归 |
| 31|	Reverse Nodes in k-Group	| |
| 32|	Copy List with Random Pointer| |	
| 33|	Linked List Cycle	| |
| 34|	Linked List Cycle II| |	
| 35|	Reorder List	| |
| 36|	LRU Cache	| |
##2.字符串
|No.|	Describition|	mark|
|  :------ |  :-------    |   :---------   |
|1	|Valid Palindrome	|前后指针相向遍历比较|
|2	|Implement strStr()|	暴力破解，判断子串是否存在|
|3	|String to Integer (atoi)|	用’1’-’0’来转换字符到数字|
|4	|Add Binary	|用’1’-’0’来转换字符到数字|
|5	|Longest Palindromic Substring	|中间向两边延伸，遍历|
|6	|Regular Expression Matching	|难以理解|
|7	|Wildcard Matching	|难。过|
|8	|Longest Common Prefix	|任意一个与其他比较|
|9	|Valid Number	|有限状态机|
|10|	Integer to Roman	|罗马数字过|
|11|	Roman to Integer	|罗马数字过|
|12|	Count and Say|	动态规划|
|13|	Anagrams	|Sort后做hashkey|
|14|	Simplify Path	|Getline切割|
|15|	Length of Last |Word	略|
##3.栈和队列
|No.	|Describition|	mark|
|  :------ |  :-------    |   :---------   |
|1|	Valid Parentheses	|入栈前括号，逐个比较如果是后括号则出栈
|2|	Longest Valid Parentheses	|将一对()转成* 
|3| Largest Rectangle in Histogram	|转成升序[1,2,2,3,5,6]
|4| Evaluate Reverse Polish Notation	|数字入栈，遇到操作符，出栈后2个，然后结果入栈|
##4.二叉树
|No.|	Describition	|mark|
|  :------ |  :-------    |   :---------   |
1	|Binary Tree Preorder Traversal|	用栈保存根节点|
2	|Binary Tree Inorder Traversal|	只保存左节点，然后再扩展右节点。|
3	|Binary Tree Postorder Traversal	|需要温习|
4	|Binary Tree Level Order Traversal	|queue<pair<TreeNode*,int>> q;int level，懂？|
5	|Binary Tree Level Order Traversal II	用栈做倒序。
6	|Binary Tree Zigzag Level Order Traversal	|需要再看|
7	|Recover Binary Search Tree	Pass||
8	|Same Tree	|先序遍历解决|
9	|Symmetric Tree|	先序遍历，需要注意左右和补位|
10	|Balanced Binary Tree	|再看|
11	|Flatten Binary Tree to Linked List	|再看|
12	|Populating Next Right Pointers in Each Node II	|
13	|Construct Binary Tree from Preorder and Inorder Traversal	|
14	|Construct Binary Tree from Inorder and Postorder Traversal	|
15	|Unique Binary Search Trees|	UniqueTrees[i] = ∑ UniqueTrees[0...k] * [i-1-k]    
16	|Unique Binary Search Trees II|	|
17	|Validate Binary Search Tree	|中序遍历，升序|
18	|Convert Sorted Array to Binary Search Tree|	中间点|
19	|Convert Sorted List to Binary Search Tree	|转成vector解决|
20	|Minimum Depth of Binary Tree	|递归，右为0取左，左为0取右，都有取二者最小，没有是0|
21	|Maximum Depth of Binary Tree	|与上题一样，min幻城max|
22	|Path Sum	|条件是叶子|
23	|Path Sum II|	神奇的path那个|
24	|Binary Tree Maximum Path Sum	|
25	|Populating Next Right Pointers in Each Node	|
26	|Sum Root to Leaf Numbers	|
#常用方法习题总结
##1.排序
No.|	Describition	|mark|
|  :------ |  :-------    |   :---------   |
1	|Merge Sorted Array	|从后往前比|
2|	Merge Two Sorted Lists	|链表跟数组最大的不同是插入非常方便|
3	|Merge k Sorted Lists|	与merge2个相同|
4|	Insertion Sort List	|
5	|Sort List|	单向链表适合用归并排序|
6|	First Missing Positive|
7	|Sort Colors|	0向前，2向后|
