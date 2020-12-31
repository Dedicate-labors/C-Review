//#include<iostream>
//#include<vector>
//using namespace std;
//
////数组已经排序好了，双指针法
//
//class Solution {
//public:
//	vector<int> searchRange(vector<int>& nums, int target) {
//		int left = 0, right = nums.size() - 1;
//		vector<int> ans(2, -1);
//		while (left <= right)
//		{
//			if (ans[0] == -1 && nums[left] == target) {
//				ans[0] = left;
//			}
//			if (ans[1] == -1 && nums[right] == target) {
//				ans[1] = right;
//			}
//			if(ans[0] == -1) ++left;
//			if(ans[1] == -1) --right;
//			if (ans[0] != -1 && ans[1] != -1) break;
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}