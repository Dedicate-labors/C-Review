//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////感觉实际应用中也只能查看该元素是否在数组中,毕竟改变了原来的数组
//int BinarySearch(vector<int>& veci, int key) {
//	int left = 0, mid, right = veci.size() - 1;
//	sort(veci.begin(), veci.end());
//	//while的循环条件写的<=一定没错，所以没去揣测其他写法
//	while (left <= right) {
//		mid = left + (right - left) / 2;
//		if (veci[mid] == key) return mid;
//		if (veci[mid] < key) left = mid + 1;
//		else right = mid - 1;
//	}
//	return 0;
//}
//
//int main() {
//	vector<int> veci{5, 1, 45, 42, 12, 6, 99};
//	int pos = BinarySearch(veci, 45);
//	cout << veci[pos] << endl;
//	return 0;
//}