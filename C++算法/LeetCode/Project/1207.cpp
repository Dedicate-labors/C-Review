//#include<iostream>
//#include<vector>
//#include<map>
//#include<set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//����һ������һ���ֵ��¼<int, int>
//	bool uniqueOccurrences(vector<int>& arr) {
//		int n = arr.size();
//		map<int, int> mapArr;
//		for (auto it : arr) {
//			++mapArr[it];
//		}
//		set<int> setArr;
//		//����mapArr�е�second���жϴ����Ƿ����ظ�
//		for (auto it : mapArr) {
//			if (setArr.count(it.second) == 0) {
//				setArr.insert(it.second);
//			}
//			else
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//int main() {
//
//	return 0;
//}