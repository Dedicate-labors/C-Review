//#include<string>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//������ϣ�����˫��
//	bool isIsomorphic(string s, string t) {
//		unordered_map<char, char> s2t;
//		unordered_map<char, char> t2s;
//
//		int len = s.length();
//		for (int i = 0; i < len; ++i) {
//			char x = s[i], y = t[i];
//			if ((s2t.count(x) && s2t[x] != y) || (t2s.count(y) && t2s[y] != x)) {
//				return false;
//			}
//			s2t[x] = y;
//			t2s[y] = x;
//		}
//		return true;
//	}
//	
//	//ʹ��һ����ϣ�����,������Ҫ���ַ�������ͬ��������ܻ���ֲ�ͬ��ָ��ͬһ��value������
//	bool isIsomorphic2(string s, string t) {
//		unordered_map<char, char> s2t;
//		unordered_set<char> setS, setT;
//		for (auto &ch : s) setS.insert(ch);
//		for (auto &ch : t) setT.insert(ch);
//		if (setS.size() != setT.size()) return false;
//		int len = s.length();
//		for (int i = 0; i < len; ++i) {
//			char x = s[i], y = t[i];
//			if (!s2t.count(x)) s2t[x] = y;
//			else {
//				if (s2t[x] != y) return false;
//			}
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Solution S;
//	cout << S.isIsomorphic("egg", "add") << endl;
//	return 0;
//}