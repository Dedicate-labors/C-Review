//#include<string>
//#include<iostream>
//#include<string>
//using namespace std;
//
////题目：找到它的第一个不重复的字符，并返回它的索引
//
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int count[26] = { 0 }; //计数
//		for (auto &ch : s) {
//			count[ch - 'a'] += 1;
//		}
//		for (int i = 0; i < s.size(); ++i) {
//			if (count[s[i] - 'a'] == 1) return i;
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	return 0;
//}