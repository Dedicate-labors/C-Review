//#include<iostream>
//#include<vector>
//using namespace std;
//
////排序方式一：简单交换排序
//void BubbleSort1(vector<int> &L) {
//	int i, j, len = L.size();
//	for (i = 0; i < len - 1; ++i) {
//		for (j = i + 1; j < len; ++j) {
//			//表明是升序
//			if (L[i] > L[j]) swap(L[i], L[j]);
//		}
//	}
//}
//
////冒泡排序方式二：改良版
///*
//该方法才更符合冒泡的现象，下面研究的是升序，小的元素在每一次循环比较中
//都会不断的向上升起，尽管不一定会升到i的位置
//*/
//void BubbleSort2(vector<int> &L) {
//	int i, j, len = L.size();
//	for (i = 0; i < len - 1; ++i) { //循环次数
//		for (j = len-2; j >= i; --j) {
//			//表明是升序
//			if (L[j] > L[j+1]) swap(L[i], L[j]);
//		}
//	}
//}
//
////冒泡排序方式三：再改良版
///*
//主要是针对排序二的情况下，增加了相同元素或者对排序好的元素的处理
//*/
//void BubbleSort3(vector<int> &L) {
//	int i, j, len = L.size();
//	bool flag = true;
//	for (i = 0; i < len - 1 && flag; ++i) { //循环次数
//		flag = false;
//		for (j = len - 2; j >= i; --j) {
//			//表明是升序
//			if (L[j] > L[j + 1]) {
//				//如果有数据交换，则证明此次比较是有意义的
//				//但如果整个比较循环都没有交换，证明已经排序好了
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
