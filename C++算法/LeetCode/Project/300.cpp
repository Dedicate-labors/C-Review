//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////̰���㷨��dp[i]������i��β������������У�nums[i]��Ĳ��������
////nums[i] > nums[i-1]: dp[i] = dp[j] + 1; j��ǰ��ͬ������
////nums[i] <= nums[i-1]: dp[i] = 1 or dp[i] = dp[j] + 1��nums[j] < nums[i] && dp[j]��Ҫ��ͬ�������
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		int len = nums.size();
//		if (len == 0) return 0;
//		vector<int> dp(len, 0); //���±�i��β������������г��ȡ�һ������nums[i]����
//		dp[0] = 1; //��һ��Ԫ��
//		int ans = 1;
//		for (int i = 1; i < len; ++i) {
//			int maxj = -1, maxDp = 0, j;
//			for (j = 0; j < i; ++j) {
//				if (nums[i] > nums[j] && dp[j] > maxDp) {
//					maxDp = dp[j];
//					maxj = j;
//				}
//			}
//			if (maxj < 0) dp[i] = 1;
//			else dp[i] = dp[maxj] + 1;
//			ans = max(ans, dp[i]);
//		}
//		//Ҫ��dp��Ѱ���
//		return ans;
//	}
//};
//
//int main()
//{
//	int a = 0, b = 1;
//	int c = max(a,b);
//	return 0;
//}