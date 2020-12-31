//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//此次采用动态规划，dp[i][j]以i,j为中心的回文子串,dp[i][j] = dp[i+1][j-1] && s[i]==s[j]
//	//i==j时，dp[i][j] = true, i+1=j时，s[i] == s[i+1] dp[i][j] = true
//	//ans = i到j的字符串
//	string longestPalindrome(string s) {
//		int len = s.length();
//		vector<vector<int>> dp(len,vector<int>(len));
//		string ans;
//		for (int l = 0; l < len; ++l) {
//			for (int i = 0; i + l < len; ++i) {
//				int j = i + l;
//				if (l == 0) dp[i][j] = 1;
//				else if (l == 1) dp[i][j] = (s[i] == s[j]);
//				else {
//					dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
//				}
//				//l+1是子字符串长度
//				if (dp[i][j] && l + 1 > ans.size()) {
//					ans = s.substr(i, l+1);
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}