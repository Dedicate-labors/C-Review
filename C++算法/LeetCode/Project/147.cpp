//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	//�ŷ����Լ�����ʹ�ö���ռ�,����ͷfirst��cur��cur������������ͷ�ڵ�
//	ListNode* insertionSortList(ListNode* head) {
//		ListNode *cur = head, *first = head; //��һ����֤�ǲ���������˵�
//		if (!head || !head->next) return head;
//		ListNode * p = head->next;
//		//������p��ʼ������
//		while (p)
//		{
//			if(p->val < first->val) {
//				//��p�ƶ������ʵ�λ�ã��ٲ鿴��һ��զ��
//				first->next = p->next;
//				ListNode * temp = cur, *pre = nullptr;
//				while (p->val > temp->val) {
//					pre = temp;
//					temp = temp->next;
//				}
//				//p->val <= temp->val�˳�
//				p->next = temp;
//				//���preΪnull��˵��p����ͷ�ڵ�
//				if(pre) pre->next = p;
//				else cur = p;
//				p = first;
//			}else
//				first = p; //�ƶ�first;
//			p = p->next;
//		}
//		//������ʾp��β�ڵ�
//		return cur;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}