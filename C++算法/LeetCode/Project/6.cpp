//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//�Լ�ȥ��ԭ�⣺6.Z���α任
//��ʽ��Ҫ��������ȥʵ�ֽ��
//(numRows-rowNum)+(numRows-1-rowNum) ���ʼ������(������ֱ����)
//�������һ�е���ĸ���ܸ�������ó�����Ϊ������һ�����ַ������У��������¸��ַ�����
//ֱ��ʹ�õ�һ����ĸ�ļ�������һ����ĸ��
//*/
//class Solution {
//public:
//	string convert(string s, int numRows) {
//		string strcat; //����ƴ�ӽ�����ַ���
//		int length = s.length();
//		for (int rowNum = 1; rowNum <= numRows; ++rowNum) { //�϶�������ѭ��
//			//ÿһ�еĴ���
//			int space1 = 2 * (numRows - rowNum); //����
//			int space2 = 2 * (rowNum - 1); //ż��� 2 * (numRows - (numRows - rowNum + 1))
//			if (rowNum == numRows) //���һ�е���ĸ��Щ����,���ͬ��һ��
//			{
//				space1 = 2 * (numRows - 1);
//				space2 = 2 * (numRows - (numRows - rowNum + 1));
//			}
//			if (space2 == 0) space2 = space1; //��û����ż����ĵ�һ�к����һ�еĴ���
//			//ÿһ�е����ݶ�ȡ��Ҫ������ż
//			bool flag = true; //��bool���ͽ����ż
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
//				//��space���ж�
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