//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////������ö�̬�滮�����Ƿǳ����͵Ķ�̬�滮
//class Solution {
//public:
//	//dp[i][j]�����ǵ���i�У�j��ʱ�Ķ�����·���������dp[m-1][n-1]
//	//dp[0][0] = 0, dp[0][i] => 1��dp[i][0] => 1 (i > 0),��ΪֻҪ���»�������
//	//dp[1][1] = dp[1][0] + dp[0][1]; //���ϱ߻�����߹�������dp[1][1]
//	//dp[i][j] = dp[i][j-1] + dp[i-1][j]
//	int uniquePaths(int m, int n) {
//		vector<vector<int>> dp(m, vector<int>(n,0));
//		//��ʼ��
//		for (int i = 1; i < n; ++i) dp[0][i] = 1;
//		for (int j = 1; j < m; ++j) dp[j][0] = 1;
//		//��ʼ��������ط����ȹ̶��У���ȥ������
//		for (int i = 1; i < n; ++i) {
//			for (int j = 1; j < m; ++j) {
//				dp[j][i] = dp[j][i - 1] + dp[j - 1][i];
//			}
//		}
//		return dp[n - 1][m - 1];
// 	}
//};
//
//int main()
//{
//
//	return 0;
//}