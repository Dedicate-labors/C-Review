//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//int partition(vector<int> &arr, int low, int high) {
//	if (low < high) {
//		int povit = arr[low];//此处是优化点之一
//		//low的位置相当于空掉了
//		while (low < high)
//		{
//			while (low < high && arr[high] >= povit) --high;
//			arr[low] = arr[high];
//			while (low < high && arr[low] < povit) ++low;
//			arr[high] = arr[low];
//		}
//		//因为循环的最后一步，无论怎样都是arr[high] = arr[low];
//		arr[low] = povit;
//	}
//	return low;
//}
//
//void quick_sort(vector<int> &arr, int low, int high) {
//	while (low < high) {
//		int i = partition(arr, low, high);
//		quick_sort(arr, low, i - 1);
//		low = i + 1;
//	}
//}
//
//int main() {
//	vector<int> arr = {5, 8, 1, 3, 5, 9};
//	int n = arr.size();
//	quick_sort(arr, 0, n-1);
//	for_each(arr.begin(), arr.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}