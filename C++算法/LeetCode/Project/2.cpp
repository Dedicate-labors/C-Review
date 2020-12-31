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
//		ListNode *head = new ListNode, *temp = head; //创建一个头节点
//		ListNode *p = l1, *q = l2;
//		int val, carry=0; //carry进位标志，0代表无进位，1代表有进位
//		while (p && q)
//		{
//			val = p->val + q->val + carry;
//			//对val还要处理
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
//		//退出时p或者q为null
//		ListNode *pre = temp; //代表前一个节点，因为temp没有再跟踪
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