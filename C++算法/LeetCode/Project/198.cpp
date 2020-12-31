//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//这和按摩师那个差不多唉！！
//	int rob(vector<int>& nums) {
//		//t0代表不偷当前用户的钱财的最大收获，t1则相反
//		int n = nums.size();
//		if (n == 0) return 0;
//		int t0 = 0, t1 = nums[0]; 
//		for (int i = 1; i < n; ++i) {
//			int p0 = max(t0, t1);
//			int p1 = t0 + nums[i];
//			t0 = p0;
//			t1 = p1;
//		}
//		return max(t0, t1);
//	}
//};
//
//int main() {
//
//	return 0;
//}