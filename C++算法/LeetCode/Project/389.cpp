//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
////��Ŀ��s��tֻ����Сд��ĸ��t��s���ŵõ���t��s�����һ����ĸ���ҵ���
//
//class Solution {
//public:
//	char findTheDifference(string s, string t) {
//		int str[26] = { 0 };
//		//����s��ʼ��str
//		for (auto &ch : s) {
//			str[ch - 'a'] += 1;
//		}
//		//����t���ҵ������ַ�
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
