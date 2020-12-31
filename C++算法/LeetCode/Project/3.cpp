//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	//int lengthOfLongestSubstring(string s) {
//	//	//用的哈希集合判断重复
//	//	unordered_set<char> occ;
//	//	int n = s.length();
//	//	//rk是右指针
//	//	int rk = -1, ans = 0;
//	//	//i是左指针
//	//	for (int i = 0; i < n; ++i) {
//	//		if (i != 0) {
//	//			occ.erase(s[i-1]);
//	//		}
//	//		while (rk + 1 < n && !occ.count(s[rk + 1])) {
//	//			occ.insert(s[rk+1]);
//	//			++rk;
//	//		}
//	//		ans = max(ans, rk - i + 1);
//	//	}
//	//}
//	int lengthOfLongestSubstring(string s) {
//		int i = 0, j = 0, ans = 0;
//		int len = s.length();
//		unordered_set<char> occ;
//		while (i < len && j <= i) {
//			if (i < len && !occ.count(s[i])) {
//				occ.insert(s[i]);
//				++i;
//			}
//			else {
//				//发现重复
//				ans = max(ans, i - j);
//				++j;
//				occ.erase(s[j-1]);
//			}
//		}
//		ans = max(ans, i - j);
//		return ans;
//	}
//};
//
//int main() {
//	string s;
//	Solution S;
//	while (cin >> s) {
//		cout << S.lengthOfLongestSubstring(s) << endl;
//	}
//	return 0;
//}