//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
///*
//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//*/
//class Solution {
//public:
//	//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//	//	//ʹ�õݹ���
//	//	if (l1 == nullptr)
//	//		return l2;
//	//	else if (l2 == nullptr)
//	//		return l1;
//	//	else if (l1->val < l2->val) {
//	//		l1->next = mergeTwoLists(l1->next, l2);
//	//		return l1;
//	//	}
//	//	else {
//	//		l2->next = mergeTwoLists(l1, l2->next);
//	//		return l2;
//	//	}
//	//}
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		//�����ⷨ���������������ռ��һ���ƽڵ�
//		ListNode * preHead = new ListNode(-1);
//
//		ListNode * prev = preHead;
//		while (l1 != nullptr && l2 != nullptr) {
//			if (l1->val > l2->val) {
//				prev->next = l2;
//				prev = l2;
//				l2 = l2->next;
//			}
//			else {
//				prev->next = l1;
//				prev = l1;
//				l1 = l1->next;
//			}
//		}
//		prev->next = l1 == nullptr ? l2 : l1;
//		return preHead->next;
//	}
//};
//
//void InitList(ListNode * &head, int n) {
//	head = new ListNode(n); //head��ͷ�ڵ�
//	int val = 0;
//
//	ListNode *p, *pr = head;
//
//	//β�巨
//	while (n--) {
//		scanf_s(" %d", &val);
//		p = new ListNode(val);
//		pr->next = p;
//		pr = p;
//	}
//}
//
//int main() {
//	ListNode * head = nullptr;
//	int n;
//	scanf_s("%d", &n);
//	InitList(head, n);
//
//	return 0;
//}