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
//		LinkList L = head; //�����һ���ڵ�
//		//�����һ���ڵ�Ϊ�գ�ֱ�ӷ���
//		if (!L) return L;
//		//�ȼ��㳤��
//		int len = 0;
//		while (L) {
//			++len;
//			L = L->next; 
//		}
//		//���ܺ���n > len�����
//		n = len - n + 1;
//		//ɾ����n���ڵ�
//		L = head;
//		int j = 1;
//		while (L && j < n-1) {
//			++j;
//			L = L->next;
//		}
//		//��ʱ�õ�L ��n-1�ϵĽڵ�
//		if (j == n - 1 && L) {
//			LinkList p = L->next;
//			L->next = p->next;
//			delete p;
//			return head;
//		}
//		//����һ�������ɾ����һ���ڵ㣬 j > n-1�����
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
////����һ����ͷ�ڵ������, n���Ӽ���
//void CreatList(LinkList &L, int n) {
//	//ͷ�ڵ�L��¼����, L�˴����ı䣬���L�Ǿֲ���������ô�ı䲻�ᱣ��
//	L = new ListNode(n);
//	L->next = nullptr;
//	int i = 1, val;
//	LinkList p = nullptr;
//	//ͷ�巨
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