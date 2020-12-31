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
//	//放飞下自己，不使用额外空间,两个头first和cur，cur是排序好链表的头节点
//	ListNode* insertionSortList(ListNode* head) {
//		ListNode *cur = head, *first = head; //第一个保证是插入排序好了的
//		if (!head || !head->next) return head;
//		ListNode * p = head->next;
//		//遍历从p开始的链表
//		while (p)
//		{
//			if(p->val < first->val) {
//				//将p移动到合适的位置，再查看下一个咋样
//				first->next = p->next;
//				ListNode * temp = cur, *pre = nullptr;
//				while (p->val > temp->val) {
//					pre = temp;
//					temp = temp->next;
//				}
//				//p->val <= temp->val退出
//				p->next = temp;
//				//如果pre为null，说明p是新头节点
//				if(pre) pre->next = p;
//				else cur = p;
//				p = first;
//			}else
//				first = p; //移动first;
//			p = p->next;
//		}
//		//结束表示p是尾节点
//		return cur;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}