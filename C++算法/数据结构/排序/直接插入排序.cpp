//#include<iostream>
//#include<vector>
//using namespace std;
//
////性能要比冒泡和选择要好一些
//void InsertSort(vector<int> &L) {
//	int i, j, len = L.size();
//	int temp;
//	//将下一个元素插入前面的有序列表中
//	for (i = 1; i < len; ++i) {
//		if (L[i] < L[i - 1]) {
//			temp = L[i];
//			for (j = i - 1;j >= 0 && L[j] > temp;--j) {
//				L[j + 1] = L[j];
//			}
//			L[j + 1] = temp;
//		}
//	}
//}
//
//int main() {
//	vector<int>  L;
//	return 0;
//}