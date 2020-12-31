//#include<iostream>
//#include<map>
//#include<string>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
////采用同样的原理不过使用26大小的数组，元素表示对应字母的个数
////sz[ch - 'a'] = 0；桶排序结束后得到对应升序
//
////第一轮：升序且要求字符各不相同
////第二轮：降序且要求字符各不相同
////第三步：重复上面的两轮，直到原字符串s中所有字符被挑选完
//class Solution {
//public:
//	string sortString(string s) {
//		//排序好字符串
//		int len = s.size();
//		map<char, int> strSz; //map天生就是升序
//		for (auto &ch : s) {
//			strSz[ch]++;
//		}
//
//		//升序且每个字符的个数被掌握
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