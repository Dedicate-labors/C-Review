//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//���������������,Ҫ�����������Ժ����������졣��
//	int maxSubArray(vector<int>& nums) {
//		int n = nums.size();
//		if (n == 0) return 0;
//		vector<int> dp(n, 0); //dp[i]��������i�±��β�����������Ӵ������������е����ֵ
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