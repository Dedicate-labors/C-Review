//#include<iostream>
//#include<vector>
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
////class Solution {
////public:
////	ListNode* oddEvenList(ListNode* head) {
////		if (!head) return head;
////		int len = 0, n = 0, m = 0;
////		ListNode *cur = head;
////		while (cur) { len++; cur = cur->next; }
////		//ȷ��n��m�Ĵ�С
////		if (len % 2 == 0) { n = m = len / 2; }
////		else { n = len / 2 + 1; m = len / 2; }
////		ListNode * p1 = head, *p2 = head;
////		int temp = n;
////		//Ѱ��p2���ʵ�λ��
////		while (temp--) p2 = p2->next;
////		//start,��ʼ����
////		p1 = p1->next; //p1�ܵ�ż������
////		p2 = n % 2 == 0 ? p2 : p2->next; //p2�ܵ���������
////		while (p2)
////		{
////			//��ʼ����
////			temp = p2->val;
////			p2->val = p1->val;
////			p1->val = temp;
////			//�ܵ���һ������г�ĵط�
////			p1 = p1->next->next;
////			if (!p2->next) { break; }
////			p2 = p2->next->next;
////		}
////		return head;
////	}
////};
//
//class Solution {
//public:
//	//�ӵ�һ����ʼ���������±����һ��ż���±����һ��
//	//ԭ�����
//	//i��������ʼλ�ã�j��ż����ʼ�±꣬����ͷ�ڵ�
//	//��ʼ����ԭ����ƴ�ӵ���Ӧ��ż����
//	ListNode* oddEvenList(ListNode* head) {
//		if (!head || !head->next || !head->next->next) return head;
//		ListNode *i = head, *j = head->next, *cur = head->next->next;
//		ListNode *p1 = i, *p2 = j; //�����µ�ͷ�ڵ�
//		int k = 3;
//		while (cur)
//		{
//			if (k % 2 == 0) {
//				//j
//				j->next = cur;
//				j = cur;
//			}
//			else {
//				//i
//				i->next = cur;
//				i = cur;
//			}
//			cur = cur->next;
//			++k;
//		}
//		//ƴ��p1,p2
//		i->next = p2;
//		j->next = nullptr;
//		return p1;
//	}
//};
//
//int main() {
//
//	return 0;
//}