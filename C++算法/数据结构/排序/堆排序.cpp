//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////已知L[s...m]中记录的关键字除L[s]之外均满足堆的定义
////本函数调整L[s]的关键字，使得L[s...m]成为一个大顶堆
//void HeapAdjust(vector<int> &L, int s, int m) {
//	int temp, j;
//	temp = L[s];
//	for (j = 2 * s; j <= m; j *= 2) {
//		if (j < m && L[j] < L[j + 1])
//			++j; //得到较大子节点
//		if (temp >= L[j]) break; //如果满足子节点小于temp，说明找到temp应该插入的位置
//		//暂时没找到temp的合适位置，就把子节点"移动"到双亲节点
//		L[s] = L[j];
//		s = j;
//	}
//	//退出循环一是到了叶子出，二是break而出
//	L[s] = temp;
//}
//
////此处是用数组模仿完全二叉树，所以最好把数组下标和完全二叉树的序列号对应起来
////所以数组的0下标不存储树节点，根节点在数组下标1处，且在树中其序号也是1
//void HeapSort(vector<int> & L) {
//	int i, len = L.size() - 1;
//	for (i = len / 2; i > 0; i--)
//		HeapAdjust(L, i, len);
//	for (i = len; i > 1; --i) { //主要是为了弹出结果，所以i > 1
//		swap(L[i], L[1]); //交换首尾
//		HeapAdjust(L, 1, i-1); //将目前唯一不满足堆定义的L[1]重新满足
//	}
//}
//
//int main() {
//	vector<int> L = {0, 50, 10, 90, 30, 70, 40, 40, 80, 60, 20};
//	HeapSort(L);
//	for_each(L.begin(), L.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}