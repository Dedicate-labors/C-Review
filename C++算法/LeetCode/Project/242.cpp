//#include<string>
//#include<map>
//#include<iostream>
//using namespace std;
//
////��һ��˼·��ֱ�Ӱ�s��t�ڳ�����ͬ�󣬽���������==�������ʱs == t�ͳɹ�
////���о����������map˼·
//
//class Solution {
//public:
//	//���жϳ��ȣ�֮�����ж���ĸ�Ƿ��У��Լ���ĸ��Ŀ
//	bool isAnagram(string s, string t) {
//		if (s.length() != t.length()) return false;
//		map<char, int> mapS, mapT; //key����ĸ�����ظ���value��ֵ��Ҫ���char�ĸ���
//		for (int i = 0; i <= s.length(); ++i) {
//			mapS[s[i]]++;
//			mapT[t[i]]++;
//		}
//		if (mapS.size() != mapT.size()) return false;
//		for (auto &it : mapS) {
//			if (mapT.count(it.first)) {
//				if (mapT[it.first] != it.second) return false;
//			}
//			else
//				return false;
//		}
//		return true;
//	}
//};
//
//int main() {
//
//	return 0;
//}