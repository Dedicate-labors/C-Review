//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////�о�ʵ��Ӧ����Ҳֻ�ܲ鿴��Ԫ���Ƿ���������,�Ͼ��ı���ԭ��������
//int BinarySearch(vector<int>& veci, int key) {
//	int left = 0, mid, right = veci.size() - 1;
//	sort(veci.begin(), veci.end());
//	//while��ѭ������д��<=һ��û������ûȥ��������д��
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