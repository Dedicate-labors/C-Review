//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////返回下标，找不到返回n
//int search(vector<int> &ivec, int key) {
//	int i = 0;
//	ivec.emplace_back(key);
//	while (ivec[i] != key) ++i;
//	ivec.pop_back();
//	return i;
//}
//
//int main() {
//	vector<int> veci{1, 5, 7, 8, 3};
//	vector<int>::iterator it = find(veci.begin(), veci.end(), 3); //只是判断元素是否在数组中的判断
//	cout << *it << endl;
//	cout << search(veci, 3) << endl;
//	return 0;
//}