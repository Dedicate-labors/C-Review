//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//dp(i, j) ��ʾʹ�� i �� 0 �� j �� 1�������ƴ�����ַ�����Ŀ����ô״̬ת�Ʒ���Ϊ��
//	//��i >= cost_zero[k] and j >= cost_one[k]ʱdp(i,j) = max(1+dp(i-cost_zero[k], j-cost_one[k]), dp(i,j))
//	//������״̬ת�Ʒ���д������
//	int findMaxForm(vector<string>& strs, int m, int n) {
//		vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
//		for (auto s : strs) {
//			vector<int> count = countzerosones(s);
//			for (int zeroes = m; zeroes >= count[0]; zeroes--)
//				for (int ones = n; ones >= count[1]; ones--)
//					//�Ե����ϼ�������𲽼���ÿһ��s
//					dp[zeroes][ones] = max(1 + dp[zeroes - count[0]][ones - count[1]], dp[zeroes][ones]);
//		}
//		return dp[m][n];
//	}
//	vector<int> countzerosones(string &s) //����s�ַ�����0��1��Ŀ
//	{
//		vector<int> c(2);//0,1�ĸ���
//		for (int i = 0; i < s.length(); ++i) {
//			c[s[i] - '0']++;
//		}
//		return c;
//	}
//};
//
//int main() {
//
//	return 0;
//}