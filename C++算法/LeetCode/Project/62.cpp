//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////本题采用动态规划，且是非常典型的动态规划
//class Solution {
//public:
//	//dp[i][j]含义是到达i行，j列时的多少条路劲，结果是dp[m-1][n-1]
//	//dp[0][0] = 0, dp[0][i] => 1，dp[i][0] => 1 (i > 0),因为只要向下或者向右
//	//dp[1][1] = dp[1][0] + dp[0][1]; //从上边或者左边过来到达dp[1][1]
//	//dp[i][j] = dp[i][j-1] + dp[i-1][j]
//	int uniquePaths(int m, int n) {
//		vector<vector<int>> dp(m, vector<int>(n,0));
//		//初始化
//		for (int i = 1; i < n; ++i) dp[0][i] = 1;
//		for (int j = 1; j < m; ++j) dp[j][0] = 1;
//		//开始填充其他地方，先固定列，再去遍历行
//		for (int i = 1; i < n; ++i) {
//			for (int j = 1; j < m; ++j) {
//				dp[j][i] = dp[j][i - 1] + dp[j - 1][i];
//			}
//		}
//		return dp[n - 1][m - 1];
// 	}
//};
//
//int main()
//{
//
//	return 0;
//}