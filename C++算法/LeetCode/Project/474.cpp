//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//dp(i, j) 表示使用 i 个 0 和 j 个 1，最多能拼出的字符串数目，那么状态转移方程为：
//	//当i >= cost_zero[k] and j >= cost_one[k]时dp(i,j) = max(1+dp(i-cost_zero[k], j-cost_one[k]), dp(i,j))
//	//最后根据状态转移方程写出代码
//	int findMaxForm(vector<string>& strs, int m, int n) {
//		vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
//		for (auto s : strs) {
//			vector<int> count = countzerosones(s);
//			for (int zeroes = m; zeroes >= count[0]; zeroes--)
//				for (int ones = n; ones >= count[1]; ones--)
//					//自底向上计算出，逐步加入每一个s
//					dp[zeroes][ones] = max(1 + dp[zeroes - count[0]][ones - count[1]], dp[zeroes][ones]);
//		}
//		return dp[m][n];
//	}
//	vector<int> countzerosones(string &s) //返回s字符串的0，1数目
//	{
//		vector<int> c(2);//0,1的个数
//		for (int i = 0; i < s.length(); ++i) {
//			c[s[i] - '0']++;
//		}
//		return c;
//	}
//};
//
//int main() {
//
//	return 0;
//}