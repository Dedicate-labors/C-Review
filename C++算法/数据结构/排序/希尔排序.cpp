//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void ShellSort(vector<int> &L) {
//	int i, j, len = L.size();
//	int increment = L.size(); //������ʼ��
//	int temp;
//	do {
//		increment = increment / 3 + 1;
//		//�����ǲ�������
//		for (i = increment; i < len; ++i) {
//			if (L[i] < L[i - increment]) {
//				temp = L[i];
//				for (j = i - increment; j >= 0 && L[j] > temp; j -= increment) {
//					L[j + increment] = L[j];
//				}
//				L[j + increment] = temp;
//			}
//		}
//	} while (increment > 1);
//	//���˸о�do_while��while�����
//	//while (increment > 1) {
//	//	increment = increment / 3 + 1;
//	//	//�����ǲ�������
//	//	for (i = increment; i < len; ++i) {
//	//		if (L[i] < L[i - increment]) {
//	//			temp = L[i];
//	//			for (j = i - increment; j >= 0 && L[j] > temp; j -= increment) {
//	//				L[j + increment] = L[j];
//	//			}
//	//			L[j + increment] = temp;
//	//		}
//	//	}
//	//}
//}
//
//int main() {
//	vector<int> L{0, 9, 1, 5, 8, 3, 7, 4, 6, 2};
//	ShellSort(L);
//	for_each(L.begin(), L.end(), [](int &a) {cout << a << ' '; });
//	return 0;
//}