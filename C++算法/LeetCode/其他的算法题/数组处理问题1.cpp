///*
//问题描述：
//给定一个有序的整数数组（包含正数、负数、O，可以重复)
//问这个数组元素的平方有多少种情况?
//比如{ -1，-1，1,1,1}的平方{1}，1种
//比如{-1，O,1，2,3}的平方{0,1，4,9}，4种
//比如{ -4，-2，-1,-1,O,0，2，3，5}的平方{0，1，4,9,16,25}，6种
//
//要求:时间复杂度为O(n)，空间复杂度为O(1)
//*/
//#include<set>
//#include<iterator>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int howPow(vector<int> &li) {
//		set<int> temp; //存放li平方后的数组元素
//		int pow = 0;
//		for (int i = 0; i < li.size(); ++i) {
//			pow = li[i] * li[i];
//			temp.insert(pow);
//		}
//		return temp.size();
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> list;
//	int m;
//	while (true) {
//		while (cin >> m) {
//			list.push_back(m);
//		}
//		cout << S.howPow(list) << endl;
//		break;
//	}
//	return 0;
//}