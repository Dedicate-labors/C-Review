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
////��ʼ�����Ա�L
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
////�ж����Ա��Ƿ�Ϊ��
//bool ListEmpty(SqList &L) {
//	return L.length > 0 ? false : true;
//}
//
////������Ա�
//void ClearList(SqList &L) {
//	L.length = 0;
//}
//
////��õ�i��Ԫ��, i = 0 ��ʼ
//int GetElem(SqList &L, int i) {
//	if (i >=0 && i < L.length)
//		return L.data[i];
//	else
//		return -1;
//}
//
////������ӦԪ�������Ա���,���ض�Ӧ�±�
//int LocateElem(SqList &L, int e) {
//	for (int i = 0; i < L.length; ++i) {
//		if (e == L.data[i]) return i;
//	}
//	return -1;
//}
//
////�����Ա��в���Ԫ��
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
////ɾ�����Ա��i��Ԫ�أ�����e������ֵ
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
////�������Ա�Ԫ�ظ���
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