//#include<vector>
//#include<iostream>
//
//using namespace std;
//
////ʹ���Ե����ϵĹ鲢����
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
//		//����������
//		int length = 0; 
//		ListNode* node = head;
//		while (node != nullptr) {
//			length++;
//			node = node->next;
//		}
//
//		//�½���һ��ͷ�ڵ�
//		ListNode* dummyHead = new ListNode(0, head);
//		//subLength�������ڵ�������������ģ�����ͨ������������������������
//		//����subLength < length
//		for (int subLength = 1; subLength < length; subLength <<= 1) {
//			ListNode* prev = dummyHead, *curr = dummyHead->next;
//			while (curr != nullptr) {
//				ListNode* head1 = curr;
//				//��<=subLength�ĳ��ȵ�����������Ƚϣ�������Ѱ����һ����������
//				for (int i = 1; i < subLength && curr->next != nullptr; i++) {
//					curr = curr->next;
//				}
//				ListNode* head2 = curr->next;
//				curr->next = nullptr; //�ϵ���һ�������β��
//				curr = head2; //cur�����¸�ֵ��
//
//				//����֮����cur != null���жϣ�����Ϊcur����һ��ʼ����null
//				for (int i = 1; i < subLength && curr != nullptr && curr->next != nullptr; i++) {
//					curr = curr->next;
//				}
//				//�����cur����ڶ�������ĩβ
//				ListNode* next = nullptr; //nextʲôʱ�򱻸�ֵ�Ǻ���Ҫ�ģ�������'��һ����ʼ'������Ϊnullptr
//				if (curr != nullptr) {
//					next = curr->next;
//					curr->next = nullptr; //�ϵ��ڶ��������β��
//				}
//				//��ʱ��next�����������������next=null����next=�µĿ�ʼ
//				ListNode* merged = merge(head1, head2); //�ϲ���������
//				prev->next = merged;
//				//prevȥ���ϲ��õ�ĩβ
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