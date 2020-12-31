//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
////题目：s，t只包含小写字母；t由s重排得到，t比s多添加一个字母，找到它
//
//class Solution {
//public:
//	char findTheDifference(string s, string t) {
//		int str[26] = { 0 };
//		//根据s初始化str
//		for (auto &ch : s) {
//			str[ch - 'a'] += 1;
//		}
//		//变量t，找到多余字符
//		for (auto &ch : t) {
//			str[ch - 'a'] -= 1;
//			if (str[ch - 'a'] < 0) return ch;
//		}
//		return ' ';
//	}
//};
//
//int main()
//{
//	int str[26] = { 0 };
//	cout << str[25] << endl;
//	return 0;
//}
