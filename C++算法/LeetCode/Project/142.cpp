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
////��ʹ�ÿ���ָ���޷��ҵ���ڣ�ֻ���ж��л�
////����unorder_set(��ϣ��)���в���
//
////���ÿ���ָ�룺����Ҫʹ����ѧ��ʽ�Ƶ�����·����ϵ
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
//	//ʹ�ÿ���ָ��
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