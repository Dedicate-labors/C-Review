//#include<iostream>
//#include<vector>
//#include<map>
//#include<set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//方法一：先用一个字典记录<int, int>
//	bool uniqueOccurrences(vector<int>& arr) {
//		int n = arr.size();
//		map<int, int> mapArr;
//		for (auto it : arr) {
//			++mapArr[it];
//		}
//		set<int> setArr;
//		//遍历mapArr中的second，判断次数是否有重复
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