//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	//����dp[i]��ʾ��i��ʱ���߷�
//	//dp[i] = dp[i-1] + dp[i-2] + dp[i-3];  �ݹ�Ҫ��ʱ��������
//	int waysToStep(int n) {
//		long long dp[4] = { 0, 1, 2, 4 };
//		if (n <= 3) return dp[n];
//		long long cur;
//		for (int i = 4; i <=n; ++i) {
//			//����������dp[i-1] + dp[i-2] + dp[i-3]
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