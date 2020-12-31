//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<climits>
//using namespace std;
//
////题目：最多k次交易，这回没有手续费，求最大利润
////一笔交易=买入+卖出 要在限制k的情况下，获得最大利润，要用贪心寻找每次交易最大利润
////以k=2 prices=[2,5,3,6,3,9], 结果是10为例，进行贪心求解
////buy = 2买入， 5 > 2 卖出 ans = 5 - 2 = 3, buy = 5,3 < 5 所以 buy = 3 (此处交易次数+1)
////这样求出的结果是：5-2 + 6-3 + 9-3 是三次交易，2 < 3就合并其中一次
////根据上面的原理扩展，当某次buy是因为<而 交易次数+1， 此次记录上次最高价，本次最低买入
//
////解法2：动态规划，buy[i][j]表示对于数组prices[0..i]中的价格而言，恰好进行j笔交易，并且当前手上持有一支股票，这种情况下的最大利润
////用sell[i][j]表示恰好进行j笔交易，并且当前手上不持有股票，这种情况下的最大利润
////buy[i][j] = max((sell[i-1][j]-prices[i]),buy[i-1][j])
////sell[i][j] = max(sell[i-1][j], (buy[i-1][j-1] + prices[i]))
////在所有的 n 天结束后，手上不持有股票对应的最大利润一定是严格大于手上持有股票对应的最大利润的。
////注意题目要求是最多k次交易下的最大利润，所以结果是sell[n-1][0..k]中的最大值
////边界：所有的 buy[0][0..k] 以及 sell[0][0..k] 设置为边界
////ps:k最多只能进行n/2取下整数次交易
//
////总结：本次动态规划划分了三层：交易次数，在第i天，是否带有股票。还可以根据最后的代码进行优化
//
//class Solution {
//public:
//	//k=2 prices=[2,5,3,6,3,9], 结果是10
//	int maxProfit(int k, vector<int>& prices) {
//		if (prices.empty()) return 0;
//
//		int n = prices.size();
//		k = min(k, n / 2);
//		//之所以是k+1次是因为还包含了0次
//		vector<vector<int>> buy(n, vector<int>(k+1));
//		vector<vector<int>> sell(n, vector<int>(k+1));
//
//		buy[0][0] = -prices[0];
//		sell[0][0] = 0;
//		//这里的i是交易次数
//		for (int i = 1; i <= k; ++i) {
//			buy[0][i] = sell[0][i] = INT_MIN / 2;
//		}
//
//		//i是天数
//		for (int i = 1; i < n; ++i) {
//			buy[i][0] = max(buy[i - 1][0], sell[i-1][0]-prices[i]);
//			//本来此处的j应该从0开始，但sell的对应公式里有[j-1],所以从j=1开始了，sell[i][0]使用默认的0
//			//但buy[i][0]还得继续，所以依旧得计算
//			for (int j = 1; j <= k; ++j) {
//				//buy[i][j] 和 sell[i][j] 都从buy[i−1][..] 以及 sell[i−1][..] 转移而来，
//				//因此我们可以使用一维数组而不是二维数组进行状态转移
//				buy[i][j] = max(buy[i - 1][j], sell[i - 1][j] - prices[i]);
//				sell[i][j] = max(sell[i - 1][j], buy[i - 1][j - 1] + prices[i]);
//			}
//		}
//		return *max_element(sell[n-1].begin(), sell[n-1].end());
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> prices = { 2, 4, 1 };
//	cout << S.maxProfit(2, prices) << endl;
//	return 0;
//}