//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////��Ŀ���壺һ֧��Ʊÿ��ļ۸�ֻ������������һ�Σ�����������
//class Solution {
//public:
//	//���ö�̬�滮dp[i]��ʾ������i����������
//	//dp[i] = max(prices[i]-min, dp[i-1]);
//	int maxProfit(vector<int>& prices) {
//		//��ʼ��
//		int min = prices[0], n = prices.size();
//		vector<int> dp(n, 0); //���ؽ��ʱ������dp[n]
//		dp[0] = 0; //��һ��Ĺ�ƱֻҪ��һ��Ʊ��
//		for (int i = 1; i < n; ++i) {
//			if (prices[i] < min) min = prices[i]; //i��ǰ����ͼ۸�����
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