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
//	//Ѱ����������ĵ�һ�������ڵ㣬����ʹ����������ĳ��Ƚ�����������
//	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//		int n = 0, m = 0;
//		ListNode *N = headA, *M = headB;
//		while (N){n++; N = N->next; }
//		while (M){m++; M = M->next; }
//		//�������Ƚ��б���
//		int diff;
//		if (n >= m) {
//			N = headA; M = headB;
//			diff = n - m;
//			while (diff--){ N = N->next; }
//			//����N��Mͬʱ��ʼ
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
//			//����N��Mͬʱ��ʼ
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