//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//
//class Solution {
//public:
//	ListNode* swapPairs(ListNode* head) {
//		if (!head || !head->next) return head;
//		ListNode *ppre = NULL, *pre = head, *cur = head->next;
//		ListNode * ret = head->next; //单纯用来返回的
//		while (cur) {
//			if (ppre == NULL) {
//				pre->next = cur->next;
//				cur->next = pre;
//			}
//			else {
//				pre->next = cur->next;
//				cur->next = pre;
//				ppre->next = cur;
//			}
//			//ppre一定有
//			ppre = cur->next;
//			if(ppre->next) pre = ppre->next;
//			else break;
//			if(pre->next) cur = pre->next;
//			else break;
//		}
//		return ret;
//	}
//};
//
//int main() {
//
//	return 0;
//}