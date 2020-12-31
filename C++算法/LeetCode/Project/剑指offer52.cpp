//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	//寻找两个链表的第一个公共节点，可以使用两个链表的长度进行算术查找
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//		int n = 0, m = 0;
//		ListNode *N = headA, *M = headB;
//		while (N){n++; N = N->next; }
//		while (M){m++; M = M->next; }
//		//链表长的先进行遍历
//		int diff;
//		if (n >= m) {
//			N = headA; M = headB;
//			diff = n - m;
//			while (diff--){ N = N->next; }
//			//下面N和M同时开始
//			while (N && M)
//			{
//				if (N == M) break;
//				N = N->next;
//				M = M->next;
//			}
//			return N;
//		}
//		else {
//			N = headA; M = headB;
//			diff = m-n;
//			while (diff--) { M = M->next; }
//			//下面N和M同时开始
//			while (N && M)
//			{
//				if (N == M) break;
//				N = N->next;
//				M = M->next;
//			}
//			return N;
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}