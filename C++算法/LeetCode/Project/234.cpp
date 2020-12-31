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
//public://O(n)ʱ�䣬O(1)�ռ�
//	//����һ���ҵ������е㣬�ضϣ���ת���أ��ٺ�ǰ���ضԱȣ�����ʱ��Ҫ��
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
//		//���ٷ�
//		ListNode* slow = head, *fast = head;
//		//��ʱû����head=null�����
//		while (fast->next != nullptr && fast->next->next != nullptr) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return slow;
//	}
//	ListNode *reverseList(ListNode* head) {
//		//������
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