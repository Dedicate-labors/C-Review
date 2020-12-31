//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstdio>
//using namespace std;
//
////题目：N是非负整数，求<=N的整数，且该整数每相邻位x和y满足 x<=y
//
////解法：(N至少2位开始)前一位表示x，后一位表示y，从N的最高位开始遍历
////所有x <= y 那直接return；如果发生x > y , x->x-1, 包括y在内后面都变9，假如这是遍历来的第一个x > y
////那么包括x在内的前面部分都要看情况改下。
//
////将前面带0的字符串转换位数字：遍历该字符串找到第一个数字为止
//
//class Solution {
//public:
//	int monotoneIncreasingDigits(int N) {
//		if (N < 10) return N;
//		//判断N的升降
//		string str = to_string(N);
//		char left = str[0], right, len = str.size();
//		for (int i = 1; i < len; ++i) {
//			right = str[i];
//			if (left > right) {
//				//修改开始,从i开始全变为9，i前面部分改成升序
//				str = change(str, i, len - 1);
//				return convert(str);
//			}
//			left = right;
//		}
//		return N;
//	}
//
//	string change(string str, int i, int end) {
//		//先该前面部分y = (str[i-1]-1),接着i-1倒着遍历到0
//		//y >= x,所以不合格的改为x = y;
//		char y = str[i - 1] - 1,x;
//		str[i - 1] = y;
//
//		for (int j = i - 2; j >= 0; --j) {
//			x = str[j];
//			if (x > y) {
//				y = '9';
//				x -= 1;
//				str[j] = x;
//				str[j + 1] = y;
//			}
//			y = x;
//		}
//		for (int j = i; j <= end; ++j) {
//			str[j] = '9';
//		}
//		return str;
//	}
//
//	int convert(string &str) {
//		int i;
//		for (i = 0; i < str.size(); ++i) {
//			if (str[i] != '0') break;
//		}
//		//此时的i记住
//		return stoi(str.substr(i, str.size() - i));
//	}
//};
//
//int main()
//{
//	char c = '1', b = '5';
//	char a = b - 1;
//	printf_s("%c, %c\n", a, b);
//	return 0;
//}