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
//typedef Node * LinkList;//ͷָ��ɣ���
//
////��ȡiλ���ϵ�Ԫ�أ�����ֵ��e  i >= 1��ʼ��
//bool GetElem(LinkList L, int i, int &e) {
//	int j = 1;
//	Node * p = nullptr, *pr = L;
//	while (pr->next != nullptr && i >= 1 && j <= i) {
//		p = pr->next; //p�ǵ�һ���ڵ�
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
////����Ĳ�����L�е�i���ڵ�֮ǰ����Ԫ��e
//bool ListInsert(LinkList L, int i, int e) {
//	int j = 1;
//	LinkList p = L->next; //��һ���ڵ�
//	//����i-1�ڵ�λ��
//	while (j < i - 1 && p) {
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i - 1) return false;
//	//�ҵ�i-1λ��
//	LinkList t = new Node(e);
//	t->next = p->next;
//	p->next = t;
//	return true;
//}
//
////�������ɾ��
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
////������P66  ���ַ���
//
////����ɾ��P69
//
//int main() {
//	/*
//	�ǵ��������������������У�������P78��ʼ
//	*/
//	return 0;
//}