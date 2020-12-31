//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<stack>
//
//using namespace std;
//
///*
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效
//使用栈
//*/
//class Solution {
//public:
//	bool isValid(string s) {
//		//排除多数情况
//		//if (s == "" || s[0] == ')' || s[0] == ']' || s[0] == '}') return false;
//
//		stack<char> stKh;
//		char temp;
//
//		/*
//		stPh无时则进s[i], 有时则比较
//		*/
//		for (int i = 0; i < s.length(); ++i) {
//			if (!stKh.empty()) {
//				temp = stKh.top();
//				if (!isEqual(temp, s[i])) stKh.push(s[i]);
//				else
//					stKh.pop();
//			}
//			else
//				stKh.push(s[i]);
//		}
//		if (stKh.size() == 0) return true;
//		else
//			return false;
//	} 
//private:
//	bool isEqual(char a, char b); //判断两个括号是否可以抵消
//};
//
//bool Solution::isEqual(char a, char b){
//	//a是栈顶，只能为左括号时才可能被消除,  b具有不确定性
//	int i;
//	char Kh[6] = {'(',')','[',']','{','}'};
//	for (i = 0; i < 6; ++i) {
//		if (Kh[i] == a) break;
//	}
//	//得到下标i
//	if (i == 0 || i == 2 || i == 4) return Kh[i + 1] == b ? true : false;
//	return false;
//}
//
//int main() {
//	string str;
//	Solution S;
//	while (cin >> str) {
//		cout << S.isValid(str) << endl;
//	}
//	return 0;
//}