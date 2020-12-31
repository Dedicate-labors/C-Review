//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////题目含义：一支股票每天的价格，只允许买入卖出一次，获得最大利润
//class Solution {
//public:
//	//适用动态规划dp[i]表示截至第i天的最大利润
//	//dp[i] = max(prices[i]-min, dp[i-1]);
//	int maxProfit(vector<int>& prices) {
//		//初始化
//		int min = prices[0], n = prices.size();
//		vector<int> dp(n, 0); //返回结果时，就是dp[n]
//		dp[0] = 0; //第一天的股票只要它一个票价
//		for (int i = 1; i < n; ++i) {
//			if (prices[i] < min) min = prices[i]; //i天前的最低价格买入
//			dp[i] = max(dp[i - 1], prices[i]-min);
//		}
//		return dp[n-1];
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> prices{ 7,1,5,3,6,4 };
//	S.maxProfit(prices);
//	return 0;
//}