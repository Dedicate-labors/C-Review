//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//设置dp[i]的含义为以i作为最后的梯子时的体力最小消耗
//	int minCostClimbingStairs(vector<int>& cost) {
//		int n = cost.size();
//		if (n == 0 || n == 1) return 0;
//		vector<int> dp(n, 0); 
//		//下面的计算，至少要求是3个梯子
//		dp[0] = cost[0];
//		dp[1] = cost[1];
//		for (int i = 2; i < n; ++i) {
//			dp[i] = min(cost[i] + dp[i - 1], cost[i] + dp[i-2]);
//		}
//		return min(dp[n-1], dp[n-2]);
//	}
//};
//
//int main() {
//
//	return 0;
//}