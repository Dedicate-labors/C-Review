//#include<iostream>
//#include<string>
//#include<vector>
//#include<sstream>
//#include<unordered_map>
//#include<unordered_set>
//
//using namespace std;
//
////ʹ�ö����������ʾ��Ӧ���ɣ���sstream���������
////pattern �� words��1. size()Ӧ����ȣ�2. ����Ҳ��һ���ࣻ 3. ��ǰ�����������£�Ӧ��һһ��Ӧ
//
////˵���׻���ʹ�ù�ϣ�����˫���ӳ��
//
//class Solution {
//public:
//	bool wordPattern(string pattern, string s) {
//		unordered_set<string> set1;
//		vector<string> words;
//		string word;
//		istringstream strin(s);
//		while (strin >> word)
//		{
//			words.push_back(word);
//			set1.insert(word);
//		}
//		int lp = pattern.size(), ls = words.size();
//		if (lp != ls) return false;
//		unordered_set<char> set2;
//		//����pattern,��words�������
//		unordered_map<char, string> mapWords; //key��pattern֮һ����ĸ��value��word
//		for (int i = 0; i < lp; ++i) {
//			set2.insert(pattern[i]);
//			if (mapWords.count(pattern[i]) == 0) {
//				mapWords[pattern[i]] = words[i];
//			}
//			else {
//				//�Ƚ�
//				if (mapWords[pattern[i]] != words[i]) return false;
//			}
//		}
//		if (set1.size() != set2.size()) return false;
//		return true;
//	}
//};
//
//int main()
//{
//	return 0;
//}