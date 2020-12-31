//#include<iostream>
//#include<string>
//#include<vector>
//#include<sstream>
//#include<unordered_map>
//#include<unordered_set>
//
//using namespace std;
//
////使用二进制数组表示对应规律？？sstream分离出单词
////pattern 和 words：1. size()应该相等；2. 种类也该一样多； 3. 在前面两个条件下，应该一一对应
//
////说到底还是使用哈希表进行双向的映射
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
//		//遍历pattern,让words遵顼规则
//		unordered_map<char, string> mapWords; //key是pattern之一的字母，value是word
//		for (int i = 0; i < lp; ++i) {
//			set2.insert(pattern[i]);
//			if (mapWords.count(pattern[i]) == 0) {
//				mapWords[pattern[i]] = words[i];
//			}
//			else {
//				//比较
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