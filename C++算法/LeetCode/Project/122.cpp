//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//多次买卖股票，价格低时买入，价格高时，卖出
//	int maxProfit(vector<int>& prices) {
//		//下降就找到最低价，升高就找到最高价
//		//山脉
//		int n = prices.size(), i = 0;
//		int min, max;
//		int sum = 0;
//		while (i+1 < n) {
//			if (prices[i] < prices[i + 1]) {
//				min = prices[i];
//				while (i+1 < n && prices[i] < prices[i + 1]) ++i;
//				max = prices[i];
//				sum += (max - min);
//			}
//			++i;
//		}
//		return sum;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> a{7,1,5,3,6,4};
//	cout << S.maxProfit(a) << endl;
//	return 0;
//}