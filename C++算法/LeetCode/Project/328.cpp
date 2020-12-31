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
////		//确定n和m的大小
////		if (len % 2 == 0) { n = m = len / 2; }
////		else { n = len / 2 + 1; m = len / 2; }
////		ListNode * p1 = head, *p2 = head;
////		int temp = n;
////		//寻找p2合适的位置
////		while (temp--) p2 = p2->next;
////		//start,开始交换
////		p1 = p1->next; //p1跑到偶数那里
////		p2 = n % 2 == 0 ? p2 : p2->next; //p2跑到奇数哪里
////		while (p2)
////		{
////			//开始交换
////			temp = p2->val;
////			p2->val = p1->val;
////			p1->val = temp;
////			//跑到下一个不和谐的地方
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
//	//从第一个开始，将奇数下标堆在一起，偶数下标堆在一起
//	//原地完成
//	//i是奇数开始位置，j是偶数开始下标，两个头节点
//	//开始遍历原链表并拼接到对应奇偶链表
//	ListNode* oddEvenList(ListNode* head) {
//		if (!head || !head->next || !head->next->next) return head;
//		ListNode *i = head, *j = head->next, *cur = head->next->next;
//		ListNode *p1 = i, *p2 = j; //保留下的头节点
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
//		//拼接p1,p2
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