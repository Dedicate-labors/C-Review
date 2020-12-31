//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int climbStairs(int n) {
//		long long dp[4] = { 0, 1, 2};
//		if (n <= 2) return dp[n];
//		long long cur;
//		for (int i = 3; i <=n; ++i) {
//			//¸üÐÂÈý½ãÃÃdp[i-1] + dp[i-2] + dp[i-3]
//			cur = (dp[2] + dp[1]);
//			dp[1] = dp[2];
//			dp[2] = cur;
//		}
//		return cur;
//	}
//};
//
//int main() {
//
//	return 0;
//}