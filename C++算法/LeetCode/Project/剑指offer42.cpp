//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//连续子数组的最大和,要求连续，所以好像又是眼熟。。
//	int maxSubArray(vector<int>& nums) {
//		int n = nums.size();
//		if (n == 0) return 0;
//		vector<int> dp(n, 0); //dp[i]含义是以i下标结尾的最大和连续子串，返回数组中的最大值
//		dp[0] = nums[0];
//		for (int i = 1; i < n; ++i) {
//			dp[i] = max(nums[i], dp[i-1] + nums[i]);
//		}
//		return *max_element(dp.begin(), dp.end());
//	}
//};
//
//int main() {
//
//	return 0;
//}