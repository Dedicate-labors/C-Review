//#include<string>
//#include<map>
//#include<iostream>
//using namespace std;
//
////另一种思路，直接把s，t在长度相同后，进行排序，再==，如果此时s == t就成功
////还有就是我下面的map思路
//
//class Solution {
//public:
//	//先判断长度，之后再判断字母是否含有，以及字母数目
//	bool isAnagram(string s, string t) {
//		if (s.length() != t.length()) return false;
//		map<char, int> mapS, mapT; //key是字母，不重复；value是值，要求的char的个数
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