//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//自己去看原题：6.Z字形变换
//公式：要根据性质去实现结果
//(numRows-rowNum)+(numRows-1-rowNum) 单词间隔距离(还不能直接用)
//除了最后一行的字母不能根据这个得出，因为不在下一个“字符串”中，而是下下个字符串里
//直接使用第一行字母的间接做最后一行字母的
//*/
//class Solution {
//public:
//	string convert(string s, int numRows) {
//		string strcat; //用于拼接结果的字符串
//		int length = s.length();
//		for (int rowNum = 1; rowNum <= numRows; ++rowNum) { //肯定不会死循环
//			//每一行的处理
//			int space1 = 2 * (numRows - rowNum); //奇间距
//			int space2 = 2 * (rowNum - 1); //偶间距 2 * (numRows - (numRows - rowNum + 1))
//			if (rowNum == numRows) //最后一行的字母有些特殊,间距同第一行
//			{
//				space1 = 2 * (numRows - 1);
//				space2 = 2 * (numRows - (numRows - rowNum + 1));
//			}
//			if (space2 == 0) space2 = space1; //对没有奇偶问题的第一行和最后一行的处理
//			//每一行的数据读取还要考虑奇偶
//			bool flag = true; //用bool类型解决奇偶
//			int space;
//			for (int i = rowNum - 1; i < length; i += space)
//			{
//				if (flag) {
//					space = space1;
//					flag = false;
//				}
//				else {
//					space = space2;
//					flag = true;
//				}
//				strcat += s[i];
//				//对space做判断
//				if (space == 0) return s;
//			}
//		}
//		cout << strcat << endl;
//		return strcat;
//	}
//};
//
//int main() {
//	Solution s;
//	string str;
//	int num;
//	cin >> str >> num;
//	s.convert(str, num);
//	return 0;
//}