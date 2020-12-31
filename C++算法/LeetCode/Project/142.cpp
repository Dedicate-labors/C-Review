//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
////我使用快慢指针无法找到入口，只能判断有环
////采用unorder_set(哈希表)进行操作
//
////采用快慢指针：不过要使用数学公式推导两者路劲关系
//class Solution {
//public:
//	ListNode *detectCycle(ListNode *head) {
//		unordered_set<ListNode *> List;
//		ListNode *p = head;
//		while (p)
//		{
//			if (List.count(p) == 0) List.insert(p);
//			else break;
//			p = p->next;
//		}
//		return p;
//	}
//
//	//使用快慢指针
//	ListNode *detectCycle2(ListNode *head) {
//		ListNode *slow = head, *fast = head;
//		while (fast)
//		{
//			slow = slow->next;
//			if (fast->next == nullptr) return nullptr;
//			fast = fast->next->next;
//			if (slow == fast) {
//				ListNode *p = head;
//				while (p != slow) {
//					p = p->next;
//					slow = slow->next;
//				}
//				return p;
//			}
//		}
//		return nullptr;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}