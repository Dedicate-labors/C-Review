//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////��֪L[s...m]�м�¼�Ĺؼ��ֳ�L[s]֮�������ѵĶ���
////����������L[s]�Ĺؼ��֣�ʹ��L[s...m]��Ϊһ���󶥶�
//void HeapAdjust(vector<int> &L, int s, int m) {
//	int temp, j;
//	temp = L[s];
//	for (j = 2 * s; j <= m; j *= 2) {
//		if (j < m && L[j] < L[j + 1])
//			++j; //�õ��ϴ��ӽڵ�
//		if (temp >= L[j]) break; //��������ӽڵ�С��temp��˵���ҵ�tempӦ�ò����λ��
//		//��ʱû�ҵ�temp�ĺ���λ�ã��Ͱ��ӽڵ�"�ƶ�"��˫�׽ڵ�
//		L[s] = L[j];
//		s = j;
//	}
//	//�˳�ѭ��һ�ǵ���Ҷ�ӳ�������break����
//	L[s] = temp;
//}
//
////�˴���������ģ����ȫ��������������ð������±����ȫ�����������кŶ�Ӧ����
////���������0�±겻�洢���ڵ㣬���ڵ��������±�1�����������������Ҳ��1
//void HeapSort(vector<int> & L) {
//	int i, len = L.size() - 1;
//	for (i = len / 2; i > 0; i--)
//		HeapAdjust(L, i, len);
//	for (i = len; i > 1; --i) { //��Ҫ��Ϊ�˵������������i > 1
//		swap(L[i], L[1]); //������β
//		HeapAdjust(L, 1, i-1); //��ĿǰΨһ������Ѷ����L[1]��������
//	}
//}
//
//int main() {
//	vector<int> L = {0, 50, 10, 90, 30, 70, 40, 40, 80, 60, 20};
//	HeapSort(L);
//	for_each(L.begin(), L.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}