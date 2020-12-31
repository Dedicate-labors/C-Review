//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public://O(n)时间，O(1)空间
//	//方法一：找到链表中点，截断，反转后半截，再和前面半截对比，满足时间要求
//	bool isPalindrome(ListNode* head) {
//		if (!head || head->next == nullptr) return true;
//		ListNode *p = head;
//		ListNode * mid = middleList(head);  //O(n)
//		ListNode * half = reverseList(mid->next); //O(n)
//		mid->next = nullptr;
//		while (half) //O(n)
//		{
//			if (half->val != p->val) return false;
//			half = half->next;
//			p = p->next;
//		}
//		return true;
//	}
//	ListNode *middleList(ListNode* head) {
//		//倍速法
//		ListNode* slow = head, *fast = head;
//		//暂时没处理head=null的情况
//		while (fast->next != nullptr && fast->next->next != nullptr) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return slow;
//	}
//	ListNode *reverseList(ListNode* head) {
//		//迭代法
//		ListNode* pre = nullptr, *cur = head, *temp;
//		while (cur) {
//			temp = cur->next;
//			cur->next = pre;
//
//			pre = cur;
//			cur = temp;
//		}
//		return pre;
//	}
//};
//
//int main() {
//
//	return 0;
//}