//#include<cstdlib>
//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//struct Node{
//	int data;
//	struct Node *next;
//	Node(int x) :data(x), next(nullptr) {}
//};
//
//typedef Node * LinkList;//头指针吧？？
//
////获取i位置上的元素，并赋值给e  i >= 1开始的
//bool GetElem(LinkList L, int i, int &e) {
//	int j = 1;
//	Node * p = nullptr, *pr = L;
//	while (pr->next != nullptr && i >= 1 && j <= i) {
//		p = pr->next; //p是第一个节点
//		if (i == j) {
//			e = p->data;
//			return true;
//		}
//		++j;
//		pr = p;
//	}
//	return false;
//}
//
////bool GetElem(LinkList L, int i, int &e) {
////	int j;
////	LinkList p;
////	p = L->next;
////	j = 1;
////	while (p && j < i) {
////		p = p->next;
////		++j;
////	}
////	if (!p || j > i)
////		return false;
////	e = p->data;
////	return true;
////}
//
////链表的插入在L中第i个节点之前插入元素e
//bool ListInsert(LinkList L, int i, int e) {
//	int j = 1;
//	LinkList p = L->next; //第一个节点
//	//到达i-1节点位置
//	while (j < i - 1 && p) {
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i - 1) return false;
//	//找到i-1位置
//	LinkList t = new Node(e);
//	t->next = p->next;
//	p->next = t;
//	return true;
//}
//
////单链表的删除
//bool ListDelete(LinkList L, int i, int &e) {
//	int j = 1;
//	LinkList p = L->next, pr = nullptr;
//	while (p && j < i) {
//		pr = p;
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i) return false;
//	e = p->data;
//	pr->next = p->next;
//	return true;
//}
//
////整表创建P66  两种方法
//
////整表删除P69
//
//int main() {
//	/*
//	非单链表的链表情况，看就行，不敲了P78开始
//	*/
//	return 0;
//}