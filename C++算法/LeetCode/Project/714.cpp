//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////��Ŀ���������������ֵ
////˼·��dp[i][0] ��ʾ��i�콻���������û�й�Ʊ���������dp[i][1] ��ʾ��i�콻������������һ֧��Ʊ���������i��0��ʼ����
////dp[i][0] = max{dp[i-1][0], dp[i-1][1] + prices[i] - fee};
////dp[i][1] = max{dp[i-1][1], dp[i-1][0] - prices[i]};
////dp[n-1][0] > dp[n-1][1] ���� return dp[n-1][0];
//
////��������̰���㷨����ʼ��buy = prices[0] + fee����prices[i] < prices[0], buy ����Ϊ prices[i] +fee
////��prices[i] > buyʱ�����ǿ���prices[i] - buy�����棬����һ���滹�и��õ��أ�����buy = prices[i],����
////����Ʊ�������������ǻ��prices[i+1] - prices[i]�����棬������һ���prices[i]-buy������
////�������������
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
//	//̰��:����������һ֧��Ʊʱ�����Ǿ��������������ͬ�۸����������������һ֧��Ʊ��Ȩ��
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