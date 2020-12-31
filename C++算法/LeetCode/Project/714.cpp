//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////题目：计算出最大的利润值
////思路：dp[i][0] 表示第i天交易完后手里没有股票的最大利润，dp[i][1] 表示第i天交易完后手里持有一支股票的最大利润（i从0开始）。
////dp[i][0] = max{dp[i-1][0], dp[i-1][1] + prices[i] - fee};
////dp[i][1] = max{dp[i-1][1], dp[i-1][0] - prices[i]};
////dp[n-1][0] > dp[n-1][1] 所以 return dp[n-1][0];
//
////方法二：贪心算法，开始：buy = prices[0] + fee，当prices[i] < prices[0], buy 更新为 prices[i] +fee
////当prices[i] > buy时，我们可以prices[i] - buy的收益，但万一后面还有更好的呢？所以buy = prices[i],这样
////当股票继续上升，我们获得prices[i+1] - prices[i]的收益，加上这一天的prices[i]-buy的收益
////其余情况不处理
//
//
//class Solution {
//public:
//	int maxProfit(vector<int>& prices, int fee) {
//		int n = prices.size();
//		vector<vector<int>> dp(n, vector<int>(2));
//		dp[0][0] = 0, dp[0][1] = -prices[0];
//		for (int i = 1; i < n; ++i) {
//			dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i] - fee);
//			dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
//		}
//		return dp[n - 1][0];
//	}
//	//贪心:当我们卖出一支股票时，我们就立即获得了以相同价格并且免除手续费买入一支股票的权利
//	int maxProfit2(vector<int>& prices, int fee) {
//		int n = prices.size();
//		int buy = prices[0] + fee;
//		int profit = 0;
//		for (int i = 1; i < n; ++i) {
//			if (prices[i] + fee < buy) {
//				buy = prices[i] + fee;
//			}
//			else if (prices[i] > buy) {
//				profit += prices[i] - buy;
//				buy = prices[i];
//			}
//		}
//		return profit;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> prices = { 2,5,3,6,3,9 };
//	cout << S.maxProfit2(prices, 0) << endl;
//	return 0;
//}