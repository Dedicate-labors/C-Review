//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//	bool isLongPressedName(string name, string typed) {
//		//暴力解法
//		int i = 0, j = 0, counti = 0, countj = 0;
//		char prei = name[i], prej=typed[j];
//		int nameSize = name.size(), typedSize = typed.size();
//		//其实只循环了O(n+m)时间，O(1)空间
//		while (i < nameSize) {
//			//初始化或者更新
//			prei = name[i], prej = typed[j];
//			counti = 0, countj = 0;
//			while (i < nameSize) {
//				if (prei == name[i]) {
//					i++; counti++;
//				}
//				else break;
//				prei = name[i - 1];
//			}
//			//结束后i的大小表示字符长度很重要
//
//			while (j < typedSize)
//			{
//				if (prej == typed[j]) {
//					j++;
//					countj++;
//				}
//				else break;
//				prej = typed[j - 1];
//			}
//			//结束后j的大小表示字符长度很重要
//			cout << prei<<':'<< counti << ' ' << prej << ':' << countj << endl;
//			if (prei != prej || counti > countj) return false;
//			//i, j的下标如果某个已经结束，另一个还有余，那返回false
//			if (i == nameSize && j != typedSize) return false;
//			if (i != nameSize && j == typedSize) return false;
//		}
//		return true;
//	}
//};
//
//int main() {
//	string name, typed;
//	Solution S;
//	cin >> name >> typed;
//	cout << S.isLongPressedName(name, typed) << endl;
//	return 0;
//}