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
////�жϵ��������Ƿ��л���
////һ��ʹ������ָ�룬ͬʱ��ͷ�ڵ������һ��һ���ƶ�һ����һ��һ���ƶ�����������л�����������
////
//class Solution {
//public:
//	//���ÿ���ָ��ֻ���ж��Ƿ��л�
//	bool hasCycle(ListNode *head) {
//		ListNode * slow= head, *fast=head; 
//		int pos = 0; //����slow����
//		do{
//			if (fast == nullptr || fast->next == nullptr) { fast = nullptr; break; };
//			fast = fast->next->next;
//			if (fast == slow) break; //���������Ϊ��׼ȷ���ҵ�ѭ�����	
//			slow = slow->next; pos++;
//		} while (fast != nullptr && fast != slow);
//		//�˳�ʱ��Ҫô�ǻ�Ҫô�Ƿǻ�
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