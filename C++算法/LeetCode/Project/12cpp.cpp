//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
///*
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//
//通常情况下，罗马数字中小的数字在大的数字的右边。下面是特殊情况：
//I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
//X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
//C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
//给定一个整数，将其转为罗马数字。输入确保在 1 到 3999 的范围内。
//
//使用贪心算法
//*/
//class Solution {
//public:
//	string intToRoman(int num) {
//		//字符化
//		string numStr = to_string(num);
//		//拼接字符串->int
//		int len = numStr.length(), i = 0;
//		int temp;
//		string strcat;
//		for (i; i < len; ++i) {
//			//获取对应位数的值
//			temp = (numStr[i] - '0');
//			strcat += retNumStr(temp, len-i);
//		}
//		return strcat;
//	}
//private:
//	char Roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'}; 
//	vector<string> Special{"IV", "IX", "XL", "XC", "CD", "CM"}; //4, 9, 40, 90, 400, 900
//	string retNumStr(int temp, int len); //返回对应位置上的数的罗马字符串
//	string retMultiCh(char ch, int num); //返回重复的num次的ch
//};
//
//string Solution::retNumStr(int temp, int len) {
//	//len代表是多少位的数
//	//temp是最高位上的数
//	string strcat = "";
//	int pd = 0;
//
//	if (len == 1) {
//		//I, V, IV, IX解决
//		//0 1
//		if (temp == 4) { strcat += Special[0]; return strcat; }
//		else if (temp == 9) { strcat += Special[1]; return strcat; }
//
//		//常规的用I，V组成
//		//0 1
//		pd = temp - 5;
//		if (pd >= 0) {
//			strcat += Roman[1];
//			strcat += retMultiCh(Roman[0], pd);
//		}
//		else {
//			strcat += retMultiCh(Roman[0], temp);
//		}
//	}
//	else if (len == 2) {
//		//X, L, XL, XC
//		//2 3
//		if (temp == 4) { strcat += Special[2]; return strcat; }
//		else if (temp == 9) { strcat += Special[3]; return strcat; }
//
//		//常规的用X，L组成
//		//2 3
//		pd = temp - 5;
//		if (pd >= 0) {
//			strcat += Roman[3];
//			strcat += retMultiCh(Roman[2], pd);
//		}
//		else {
//			strcat += retMultiCh(Roman[2], temp);
//		}
//	}
//	else if(len == 3){
//		//C, D, CD, CM
//		//4 5
//		if (temp == 4) { strcat += Special[4]; return strcat; }
//		else if (temp == 9) { strcat += Special[5]; return strcat; }
//
//		//常规的用C,D组成
//		//4 5
//		pd = temp - 5;
//		if (pd >= 0) {
//			strcat += Roman[5];
//			strcat += retMultiCh(Roman[4], pd);
//		}
//		else {
//			strcat += retMultiCh(Roman[4], temp);
//		}
//	}
//	else if (len == 4) {
//		//M 6
//		strcat += retMultiCh(Roman[6], temp);
//	}
//	return strcat;
//}
//
//string Solution::retMultiCh(char ch, int num) {
//	//重复num次ch
//	string strcat = "";
//	for (int j = 0; j < num; ++j) {
//		strcat += ch;
//	}
//	return strcat;
//}
//
//int main()
//{
//	int num;
//	Solution S;
//	while (cin >> num)
//	{
//		cout << S.intToRoman(num) << endl;
//	}
//	return 0;
//}

//题解
//class Solution {
//public:
//	string intToRoman(int num) {
//		int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
//		string symbols[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
//		string sb = "";
//		for (int i = 0; i < sizeof(values)/sizeof(int) && num >= 0; i++) {
//			while (values[i] <= num)
//			{
//				num -= values[i];
//				sb += symbols[i];
//			}
//		}
//		return sb;
//	}
//}