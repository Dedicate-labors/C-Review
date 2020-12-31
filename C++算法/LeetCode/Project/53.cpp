//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int n = nums.size();
//		//dp[i]的含义是以i为结尾的和最大字符串，所以从i下标的视角出发
//		//要么是单个nums[i],要么是联合前面的子串，dp[i-1]+nums[i]是个连续的子串
//		//两者谁大，谁就是以i为结尾的和最大字符串
//		vector<int> dp(n, 0);
//		dp[0] = nums[0];
//		for (int i = 1; i < n; ++i) {
//			dp[i] = max(nums[i], dp[i - 1] + nums[i]);
//		}
//		return *max_element(dp.begin(), dp.end());
//	}
//
//	//简化写法
//	int maxSubArray2(vector<int>& nums) {
//		int ans = nums[0], pre = 0;
//		for (auto it : nums) {
//			pre = max(it, it+pre);
//			ans = max(ans, pre);
//		}
//		return ans;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
//	cout << S.maxSubArray(nums) << endl;
//	return 0;
//}