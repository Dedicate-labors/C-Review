//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////给定是输入数组，下标表示预约号数，值表示时长
////要求：1.号数不能相邻，2. 总预约时间最长
////完全没想法。。。QWQ
//class Solution {
//public:
//	int massage(vector<int>& nums) {
//		int n = nums.size();
//		if (!n) return 0;
//		//dp0代表不选择当前nums[i]的最长预约时间
//		//dp1代表选择当前nums[i]的最长预约时间
//		int dp0 = 0, dp1 = nums[0];
//		for (int i = 1; i < n; ++i) {
//			int tp0 = max(dp0, dp1);
//			int tp1 = dp0 + nums[i];
//			dp0 = tp0;
//			dp1 = tp1;
//		}
//		return max(dp0, dp1);
//	}
//};
//
//int main() {
//
//	return 0;
//}