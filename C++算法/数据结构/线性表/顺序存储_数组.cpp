//#include<cstdlib>
//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//
//#define MAXSIZE 20
//typedef int ElemenType;
//
//typedef struct {
//	ElemenType data[MAXSIZE];
//	int length;
//}SqList;
//
////Opration
////初始化线性表L
//void InitList(SqList &L) {
//	int num, len;
//	L.length = 0;
//	scanf_s("%d", &len);
//	while (len < MAXSIZE && L.length < len) {
//		scanf_s(" %d", &num);
//		L.data[L.length++] = num;
//	}
//}
//
////判断线性表是否为空
//bool ListEmpty(SqList &L) {
//	return L.length > 0 ? false : true;
//}
//
////清空线性表
//void ClearList(SqList &L) {
//	L.length = 0;
//}
//
////获得第i个元素, i = 0 开始
//int GetElem(SqList &L, int i) {
//	if (i >=0 && i < L.length)
//		return L.data[i];
//	else
//		return -1;
//}
//
////查找相应元素在线性表中,返回对应下标
//int LocateElem(SqList &L, int e) {
//	for (int i = 0; i < L.length; ++i) {
//		if (e == L.data[i]) return i;
//	}
//	return -1;
//}
//
////在线性表中插入元素
//bool ListInsert(SqList &L, int i, int e) {
//	if (i >= 0 && i < MAXSIZE) {
//		for (int j = L.length - 1; j >= i; --j) {
//			if (j + 1 == MAXSIZE) return false;
//			L.data[j + 1] = L.data[j];
//		}
//		L.data[i] = e;
//		return true;
//	}
//	else
//		return false;
//}
//
////删除线性表第i个元素，并用e返回其值
//bool ListDelete(SqList &L, int i, int &e) {
//	if (i >=0 && L.length > 0 && i < L.length) {
//		e = L.data[i];
//		for (int j = i - 1; j >= 0; --j) {
//			L.data[j+1] = L.data[j];
//		}
//	}
//	else
//		return false;
//}
//
////返回线性表元素个数
//int ListLength(SqList &L)
//{
//	return L.length;
//}
//
//int main() {
//	SqList L;
//	InitList(L);
//	cout << GetElem(L, 1) << endl;
//	return 0;
//}