//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	//假设dp[i]表示到i阶时的走法
//	//dp[i] = dp[i-1] + dp[i-2] + dp[i-3];  递归要超时。。无语
//	int waysToStep(int n) {
//		long long dp[4] = { 0, 1, 2, 4 };
//		if (n <= 3) return dp[n];
//		long long cur;
//		for (int i = 4; i <=n; ++i) {
//			//更新三姐妹dp[i-1] + dp[i-2] + dp[i-3]
//			cur = (dp[3] + dp[2] + dp[1]) % 1000000007;
//			dp[1] = dp[2];
//			dp[2] = dp[3];
//			dp[3] = cur;
//		}
//		return cur;
//	}
//};
//
//int main() {
//
//	return 0;
//}