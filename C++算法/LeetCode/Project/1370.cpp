//#include<iostream>
//#include<map>
//#include<string>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
////����ͬ����ԭ����ʹ��26��С�����飬Ԫ�ر�ʾ��Ӧ��ĸ�ĸ���
////sz[ch - 'a'] = 0��Ͱ���������õ���Ӧ����
//
////��һ�֣�������Ҫ���ַ�������ͬ
////�ڶ��֣�������Ҫ���ַ�������ͬ
////���������ظ���������֣�ֱ��ԭ�ַ���s�������ַ�����ѡ��
//class Solution {
//public:
//	string sortString(string s) {
//		//������ַ���
//		int len = s.size();
//		map<char, int> strSz; //map������������
//		for (auto &ch : s) {
//			strSz[ch]++;
//		}
//
//		//������ÿ���ַ��ĸ���������
//		string ans;
//
//		while (ans.size() < len) {
//			for (auto first = strSz.begin(); first != strSz.end(); ++first) {
//				if (first->second > 0) {
//					ans.push_back(first->first);
//					first->second--;
//				}
//			}
//			for (auto first = strSz.rbegin(); first != strSz.rend(); ++first) {
//				if (first->second > 0) {
//					ans.push_back(first->first);
//					first->second--;
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution S;
//	string s = "aaaabbbbcccc";
//	cout << S.sortString(s) << endl;
//	return 0;
//}