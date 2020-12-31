//#include<iostream>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
///*
//归并操作的过程如下：
//	(1) 申请空间，使其大小为两个已经排序序列之和，该空间用来存放合并后的序列
//	(2) 设定两个指针，最初位置分别为两个已经排序序列的起始位置
//	(3) 比较两个指针所指向的元素，选择相对小的元素放入到合并空间，并移动指针到下一位置
//	(4) 重复步骤3直到某一指针到达序列尾
//	(5) 将另一序列剩下的所有元素直接复制(抄)到合并序列尾
//简单的说，就是将一个序列不断的进行二分（当然也可以三分、多分）分裂，然后递归下去，再合并。
//*/
//
//void mergeAdd(vector<int> &arr, int left, int mid, int right, vector<int> &temp)//实现“治”
//{
//	int i = left;
//	int j = mid + 1;
//	int k = left;//临时下标
//	while (i <= mid && j <= right) {
//		if (arr[i] < arr[j]) {
//			temp[k++] = arr[i++];
//		}
//		else {
//			temp[k++] = arr[j++];
//		}
//	}
//	while (i <= mid)
//	{
//		temp[k++] = arr[i++];
//
//	}
//	while (j <= right) {
//		temp[k++] = arr[j++];
//	}
//	//把temp中的内容拷给arr数组中
//	//进行归并的时候，处理的区间是arr[left,right),对应的会把
//	//这部分区间的数组填到temp[left,right)区间上
//	//memcpy(arr + left, temp + left, sizeof(int)*(right - left + 1));
//	for (int i = 0; i < right - left + 1; ++i) {
//		arr[left + i] = temp[left + i];
//	}
//}
//
//void mergeSort(vector<int> &arr, int left, int right, vector<int> &temp) {//实现“分”
//	int mid = 0;
//	if (left < right)
//	{
//		mid = left + (right - left) / 2;
//		mergeSort(arr, left, mid, temp); //left到mid排好序
//		mergeSort(arr, mid + 1, right, temp); //mid+1到right排好序 
//		mergeAdd(arr, left, mid, right, temp); //合并
//	}
//}
//
//int main() {
//	vector<int> arr{8,4,5,7,1,3,6,2 };
//	int len = arr.size();
//	vector<int> temp(len); //工具数组
//	mergeSort(arr, 0, len-1, temp);
//	for_each(arr.begin(), arr.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}