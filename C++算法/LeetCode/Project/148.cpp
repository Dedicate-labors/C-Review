//#include<vector>
//#include<iostream>
//
//using namespace std;
//
////使用自底向上的归并排序
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
//	ListNode* sortList(ListNode* head) {
//		if (head == nullptr) {
//			return head;
//		}
//		//计算链表长度
//		int length = 0; 
//		ListNode* node = head;
//		while (node != nullptr) {
//			length++;
//			node = node->next;
//		}
//
//		//新建了一个头节点
//		ListNode* dummyHead = new ListNode(0, head);
//		//subLength长度以内的子链表是有序的，并且通过它来构造更大的有序子链表
//		//所以subLength < length
//		for (int subLength = 1; subLength < length; subLength <<= 1) {
//			ListNode* prev = dummyHead, *curr = dummyHead->next;
//			while (curr != nullptr) {
//				ListNode* head1 = curr;
//				//以<=subLength的长度的两个链表相比较，下面是寻找另一条链表的起点
//				for (int i = 1; i < subLength && curr->next != nullptr; i++) {
//					curr = curr->next;
//				}
//				ListNode* head2 = curr->next;
//				curr->next = nullptr; //断掉第一条链表的尾巴
//				curr = head2; //cur被重新赋值了
//
//				//下面之所以cur != null的判断，是因为cur可能一开始就是null
//				for (int i = 1; i < subLength && curr != nullptr && curr->next != nullptr; i++) {
//					curr = curr->next;
//				}
//				//上面的cur到达第二条链表末尾
//				ListNode* next = nullptr; //next什么时候被赋值是很重要的，必须是'下一个开始'，否则为nullptr
//				if (curr != nullptr) {
//					next = curr->next;
//					curr->next = nullptr; //断掉第二条链表的尾巴
//				}
//				//此时的next还可能有两种情况，next=null或者next=新的开始
//				ListNode* merged = merge(head1, head2); //合并两个链表
//				prev->next = merged;
//				//prev去到合并好的末尾
//				while (prev->next != nullptr) {
//					prev = prev->next;
//				}
//				curr = next;
//			}
//		}
//		return dummyHead->next;
//	}
//
//	ListNode* merge(ListNode* head1, ListNode* head2) {
//		ListNode* dummyHead = new ListNode(0);
//		ListNode* temp = dummyHead, *temp1 = head1, *temp2 = head2;
//		while (temp1 != nullptr && temp2 != nullptr) {
//			if (temp1->val <= temp2->val) {
//				temp->next = temp1;
//				temp1 = temp1->next;
//			}
//			else {
//				temp->next = temp2;
//				temp2 = temp2->next;
//			}
//			temp = temp->next;
//		}
//		if (temp1 != nullptr) {
//			temp->next = temp1;
//		}
//		else if (temp2 != nullptr) {
//			temp->next = temp2;
//		}
//		return dummyHead->next;
//	}
//};
//
//int main() {
//
//	return 0;
//}