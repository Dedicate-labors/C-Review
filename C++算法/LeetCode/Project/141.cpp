//#include<vector>
//#include<iostream>
//using namespace std;
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
////判断单向链表是否有环？
////一、使用两个指针，同时从头节点出发，一个一次移动一步，一个一次移动两步，如果有环，创造相遇
////
//class Solution {
//public:
//	//采用快慢指针只能判断是否有环
//	bool hasCycle(ListNode *head) {
//		ListNode * slow= head, *fast=head; 
//		int pos = 0; //跟踪slow就行
//		do{
//			if (fast == nullptr || fast->next == nullptr) { fast = nullptr; break; };
//			fast = fast->next->next;
//			if (fast == slow) break; //这里加上是为了准确的找到循环起点	
//			slow = slow->next; pos++;
//		} while (fast != nullptr && fast != slow);
//		//退出时，要么是环要么是非环
//		if (fast == nullptr) return false;
//		else
//			return true;
//	}
//};
//
//int main() {
//
//	return 0;
//}