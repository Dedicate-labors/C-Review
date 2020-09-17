//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
///*
//本题和12题刚好相反，其他条件不变
//*/
//class Solution {
//public:
//	int romanToInt(string s) {
//		//遍历symbols
//		int now = 0, per = 0, ret = 0; //now是目前位，per是上一位，ret是结果
//		for (int i = 0; i < s.length(); i++)
//		{
//			now = chToInt(s[i]); //吧某位转为int
//			if (now <= per) ret += now;
//			else {
//				//ret此时含有上次的per值
//				//此处计算的本就是per和now两位共有的值(now - per)
//				//ret = ret - per + (now - per)
//				ret += (now - 2*per);
//			}
//			per = now;
//		}
//		return ret;
//	}
//private:
//	int values[7] = {1, 5, 10, 50, 100, 500, 1000};
//	char Roman[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	int chToInt(char ch);//ch->int
//};
//
//int Solution::chToInt(char ch) {
//	int i = 0;
//	for (i = 0; i < 7; i++) {
//		if (ch == Roman[i]) break;
//	}
//	return values[i];
//}
//
//int main() {
//	string s;
//	Solution S;
//	while (cin >> s) {
//		cout << S.romanToInt(s) << endl;
//	}
//	return 0;
//}