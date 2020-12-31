//#include<vector>
//#include<iostream>
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
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode *head = new ListNode, *temp = head; //����һ��ͷ�ڵ�
//		ListNode *p = l1, *q = l2;
//		int val, carry=0; //carry��λ��־��0�����޽�λ��1�����н�λ
//		while (p && q)
//		{
//			val = p->val + q->val + carry;
//			//��val��Ҫ����
//			if (val >= 10) {
//				carry = 1;
//				val = val % 10;
//			}
//			else carry = 0;
//			temp->next = new ListNode(val);
//
//			p = p->next;
//			q = q->next;
//			temp = temp->next;
//		}
//		//�˳�ʱp����qΪnull
//		ListNode *pre = temp; //����ǰһ���ڵ㣬��Ϊtempû���ٸ���
//		if (p) {
//			temp->next = p;
//			while (p)
//			{
//				p->val += carry;
//				if (p->val >= 10) {
//					carry = 1;
//					p->val = p->val % 10;
//				}
//				else
//					carry = 0;
//				pre = p;
//				p = p->next;
//			}
//		}
//		else {
//			temp->next = q;
//			while (q)
//			{
//				q->val += carry;
//				if (q->val >= 10) {
//					carry = 1;
//					q->val = q->val % 10;
//				}
//				else
//					carry = 0;
//				pre = q;
//				q = q->next;
//			}
//		}
//		if (carry) pre->next = new ListNode(1);
//		return head->next;
//	}
//};
//
//int main() {
//	return 0;
//}