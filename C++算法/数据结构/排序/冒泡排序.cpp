//#include<iostream>
//#include<vector>
//using namespace std;
//
////����ʽһ���򵥽�������
//void BubbleSort1(vector<int> &L) {
//	int i, j, len = L.size();
//	for (i = 0; i < len - 1; ++i) {
//		for (j = i + 1; j < len; ++j) {
//			//����������
//			if (L[i] > L[j]) swap(L[i], L[j]);
//		}
//	}
//}
//
////ð������ʽ����������
///*
//�÷����Ÿ�����ð�ݵ����������о���������С��Ԫ����ÿһ��ѭ���Ƚ���
//���᲻�ϵ��������𣬾��ܲ�һ��������i��λ��
//*/
//void BubbleSort2(vector<int> &L) {
//	int i, j, len = L.size();
//	for (i = 0; i < len - 1; ++i) { //ѭ������
//		for (j = len-2; j >= i; --j) {
//			//����������
//			if (L[j] > L[j+1]) swap(L[i], L[j]);
//		}
//	}
//}
//
////ð������ʽ�����ٸ�����
///*
//��Ҫ����������������£���������ͬԪ�ػ��߶�����õ�Ԫ�صĴ���
//*/
//void BubbleSort3(vector<int> &L) {
//	int i, j, len = L.size();
//	bool flag = true;
//	for (i = 0; i < len - 1 && flag; ++i) { //ѭ������
//		flag = false;
//		for (j = len - 2; j >= i; --j) {
//			//����������
//			if (L[j] > L[j + 1]) {
//				//��������ݽ�������֤���˴αȽ����������
//				//����������Ƚ�ѭ����û�н�����֤���Ѿ��������
//				flag = true;
//				swap(L[i], L[j]);
//			}
//		}
//	}
//}
//
//int main() {
//	vector<int> L{2, 1, 3, 4, 5, 6, 7, 8, 9  };
//	BubbleSort3(L);
//	return 0;
//}
