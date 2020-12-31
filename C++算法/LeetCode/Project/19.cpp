//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//typedef ListNode * LinkList;
//
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		LinkList L = head; //保存第一个节点
//		//如果第一个节点为空，直接返回
//		if (!L) return L;
//		//先计算长度
//		int len = 0;
//		while (L) {
//			++len;
//			L = L->next; 
//		}
//		//可能害怕n > len的情况
//		n = len - n + 1;
//		//删除第n个节点
//		L = head;
//		int j = 1;
//		while (L && j < n-1) {
//			++j;
//			L = L->next;
//		}
//		//此时得到L 是n-1上的节点
//		if (j == n - 1 && L) {
//			LinkList p = L->next;
//			L->next = p->next;
//			delete p;
//			return head;
//		}
//		//另外一种情况是删除第一个节点， j > n-1的情况
//		LinkList p = L->next;
//		delete L;
//		return p;
//	}
//	void show(ListNode * head);
//};
//
//void Solution::show(ListNode * head) {
//	while (head) {
//		printf_s("%d  ", head->val);
//		head = head->next;
//	}
//}
//
////创建一个带头节点的链表, n个子几点
//void CreatList(LinkList &L, int n) {
//	//头节点L记录长度, L此处被改变，如果L是局部变量，那么改变不会保存
//	L = new ListNode(n);
//	L->next = nullptr;
//	int i = 1, val;
//	LinkList p = nullptr;
//	//头插法
//	while (i <= n) {
//		scanf_s(" %d", &val);
//		p = new ListNode(val);
//		p->next = L->next;
//		L->next = p;
//
//		++i;
//	}
//}
//
//int  main() {
//	LinkList head = nullptr;
//	int n;
//	Solution S;
//	scanf_s("%d", &n);
//	CreatList(head, n);
//
//	scanf_s(" %d", &n);
//	head = S.removeNthFromEnd(head->next, n);
//	S.show(head);
//	return 0;
//}