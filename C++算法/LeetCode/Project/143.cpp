//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//
////����һ������vector<ListNode *>�����飬 Ȼ���ٽ���������ع�,
////��Ŀ�����������ǳ����������������ListNode (*L)[4]; head = *L;
////��������
//
//class Solution {
//public:
//	//void reorderList(ListNode* head) {
//	//	vector<ListNode *> L;
//	//	ListNode *p = head;
//	//	while (p) {
//	//		L.push_back(p);
//	//		p = p->next;
//	//	}
//	//	int n = L.size(); //������
//	//	if (n == 0 || n == 1 || n == 2) return;
//	//	int half, lL; //lL������Ҫ������������ұ߽ڵ㣬half�����������Ҫ����ڵ��ǰһ���ڵ�
//	//	if (n % 2 == 0) {
//	//		half = n / 2 - 1;
//	//		lL = n / 2 + 2;
//	//		//ע���±��С
//	//		L[n / 2]->next = nullptr;
//	//	}
//	//	else {
//	//		half = n / 2;
//	//		lL = half + 2;
//	//		//ע���±��С
//	//		L[half]->next = nullptr;
//	//	}
//
//	//	//i ��j��ʼʹ���±�,ps��L��������û�иĶ�
//	//	for (int i = 0, j = n-1; i <= half-1 && j >= lL-1; ++i, --j) {
//	//		L[i]->next = L[j];
//	//		L[j]->next = L[i + 1];
//	//	}
//	//}
//	void reorderList(ListNode* head) {
//		if (head == nullptr) {
//			return;
//		}
//		ListNode* mid = middleNode(head); //�ҵ�ԭ�����е�
//		//���ڴ���������е㣺������ȥ�յ㣬ż��ȡ���߼�ƫ����Ǹ�
//		ListNode* l1 = head;
//		ListNode* l2 = mid->next;
//		mid->next = nullptr;
//		l2 = reverseList(l2); //��ת����
//		mergeList(l1, l2); //�� ������
//	}
//
//	ListNode* middleNode(ListNode* head) {
//		ListNode* slow = head;
//		ListNode* fast = head;
//		while (fast->next != nullptr && fast->next->next != nullptr) {
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return slow;
//	}
//
//	ListNode* reverseList(ListNode* head) {
//		ListNode* prev = nullptr;
//		ListNode* curr = head;
//		while (curr != nullptr) {
//			ListNode* nextTemp = curr->next;
//			curr->next = prev;
//			prev = curr;
//			curr = nextTemp;
//		}
//		return prev;
//	}
//
//	void mergeList(ListNode* l1, ListNode* l2) {
//		ListNode* l1_tmp;
//		ListNode* l2_tmp;
//		while (l1 != nullptr && l2 != nullptr) {
//			l1_tmp = l1->next;
//			l2_tmp = l2->next;
//
//			l1->next = l2;
//			l1 = l1_tmp;
//
//			l2->next = l1;
//			l2 = l2_tmp;
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}