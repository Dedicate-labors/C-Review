//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////贪心算法，dp[i]代表以i结尾的最长上升子序列，nums[i]真的参与进来了
////nums[i] > nums[i-1]: dp[i] = dp[j] + 1; j是前面同类最大的
////nums[i] <= nums[i-1]: dp[i] = 1 or dp[i] = dp[j] + 1；nums[j] < nums[i] && dp[j]还要在同类中最大
//
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		int len = nums.size();
//		if (len == 0) return 0;
//		vector<int> dp(len, 0); //以下标i结尾的最长上升子序列长度。一定含有nums[i]在内
//		dp[0] = 1; //第一个元素
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
//		//要在dp中寻找最长
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