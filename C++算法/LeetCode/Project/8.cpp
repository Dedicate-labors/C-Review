//#include<iostream>
//#include<string>
//#include<cctype>
//#include<sstream>
//#include<climits>
//using namespace std;
//
//class Solution {
//public:
//	int myAtoi(string str) {
//		//1. 对字符串进行处理，去除开头的空格
//		//2. 数字转换：分有符号和无符号
//		//3. 开头是+-或者数字的可以，此外被return 0;
//		str = strip(str); //在leet凑得上没有消除空格
//
//		if (str == "") return 0; //字符串处理后假如为空就return 0
//
//		int len = str.length();
//		string strRes;
//		//无符号
//		if (isdigit(str[0]))
//		{
//			//只是读取出一个整数字符串
//			strRes = readInt(str);
//			//对读取整数字符串考虑最大，以及没有
//			if (strRes == "") return 0;
//
//			if(strRes.length() > 10 || (strRes.length() == 10 && pdYc(strRes))) return INT_MAX;
//
//			return stoi(strRes);
//		}
//		//有符号
//		else if(str[0] == '+' || str[0] == '-')
//		{
//			bool flag;
//			if (str[0] == '+') flag = true;
//			else flag = false;
//
//			if (len == 1 || !isdigit(str[1])) return 0; //确保提取的后面str是整数字符串
//			str = str.substr(1, len - 1);
//
//			strRes = readInt(str);
//			//提取处整数字符串strRes,对读取整数字符串考虑最小，以及没有
//			if (strRes == "") return 0;
//
//			//溢出的是正是负要判断
//			if (strRes.length() > 10 || (strRes.length() == 10 && pdYc(strRes)))
//			{
//				if (flag) return INT_MAX;
//				else return INT_MIN;
//			}
//
//			int res = stoi(strRes);
//			if (flag) return res;
//			else
//				return 0 - res;
//		}
//		return 0;
//	}
//private:
//	string strip(string &str);//去除开头的空格
//	string readInt(string &str);// 读取连续的一段数字
//	bool pdYc(string &numStr);
//	bool sign(string &str, int &pos);
//};
//
//string Solution::strip(string &str) {
//	//内部的临时变量会被删除，所以此处返回类型不能是引用
//	return str;
//}
//
//string Solution::readInt(string &str) {
//	//只从连续的字符串(开头是数字字符串)中读取出 第一个连续的 整数字符串
//	string strcat; //拼接字符串
//	bool flag = true;
//	for (int i = 0; i < str.length();++i) {
//		if (!isdigit(str[i])) break; //当遇到非数字的情况下就退出
//
//		if (str[i] == '0' && flag) continue; //开头的0就去掉
//		else if (isdigit(str[i]) && str[i] != '0') flag = false; //中间的0不去掉
//
//		strcat += str[i];
//	}
//	return strcat;
//}
//
//bool Solution::pdYc(string & numStr) {
//	//此处我们根据计数器获得int类型的最大字符串长度
//	int maxLen = 10;
//	int rev = stoi(numStr.substr(0, 9));
//	int pop = atoi(&numStr[9]);
//	if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return true;
//	if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return true;
//	return false;
//}
//
//bool Solution::sign(string &str, int & pos) {
//	bool flag = true;
//	//对有符号的整数字符串进行符号鉴定
//	for (pos = 0; pos < str.length(); pos++) {
//		if (isdigit(str[pos])) break;
//		if (str[pos] == '-') flag = false;
//		else if (str[pos] == '+') flag = true;
//	}
//	return flag;
//}
//
//void eachWord(string &str) {
//	istringstream in(str);
//	string word;
//	while (in >> word)
//	{
//		cout << word << " ";
//	}
//}
//
//
////string Solution::strip(string &str) {
////	//内部的临时变量会被删除，所以此处返回类型不能是引用
////	int pos = 0;
////	for (auto ch : str) {
////		if (isspace(ch)) pos++;
////		else break;
////	}
////	string strcat = str.substr(pos, str.length() - pos);
////	return strcat;
////}
//
//int main() {
//	Solution s;
//	string str;
//	while (cin >> str) {
//		int res = s.myAtoi(str);
//		cout << res << endl;
//	}
//	return 0;
//} 