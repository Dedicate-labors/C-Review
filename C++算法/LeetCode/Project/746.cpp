//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//����dp[i]�ĺ���Ϊ��i��Ϊ��������ʱ��������С����
//	int minCostClimbingStairs(vector<int>& cost) {
//		int n = cost.size();
//		if (n == 0 || n == 1) return 0;
//		vector<int> dp(n, 0); 
//		//����ļ��㣬����Ҫ����3������
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