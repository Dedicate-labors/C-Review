//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
///*
//�����ǰ׺
//�������÷��η�LCP(S1...Sn) = LCP(LCP(S1...Sk),LCP(Sk+1, Sn));
//*/
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		if (strs.size() == 0) return "";
//		if (strs.size() == 1) return strs[0];
//
//		//size > 1�����
//		//�ҵķ���������ɨ�跨
//		int i = 0, len = strs[0].length();
//		char ch;
//		bool flag = true;
//		do {
//			if (i == len) break;
//			char ch = strs[0][i];
//			for (auto str : strs) {
//				if (str[i] != ch) {
//					flag = false;
//					break;
//				}
//			}
//			++i;
//		} while (flag);
//		return strs[0].substr(0, i);
//	}
//private:
//	//bool func(vector<string>& strs, const int &i);
//};
//
////bool Solution::func(vector<string>& strs, const int &i) {
////	//��i���鿴, i��ֵ��Ҫ��¼
////	char ch = strs[0][i];
////	for (auto str : strs) {
////		//����Խ����ô�죿
////		if (i == str.length()) return false;
////		if (str[i] != ch)
////			return false;
////	}
////	return func(strs, i + 1);
////}
//
//int main() {
//	vector<string> strs = {"flower"};
//	string str;
//	Solution S;
//	//while (cin >> str)
//	//{
//	//	strs.push_back(str);
//	//}
//	cout << S.longestCommonPrefix(strs) << endl;
//	return 0;
//}