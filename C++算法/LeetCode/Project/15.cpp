//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//个人感觉是动态规划的题，但我还是做不来，完全没有思路
//////n >= 3的情况下
////sort(nums.begin(), nums.end());
////vector<vector<int>> ret;
////int len = nums.size();
////int x = 999, y = 999, z = 999, temp = 0;
//////方法一，固定一个，变另外两个
////for (int i = 0; i < len-2; ++i) {
////	temp = nums[i];
////	if (temp == x) continue;
////	x = nums[i], y = 999;
////	//遍历出另外两个y,z
////	for (int j = i+1; j < len; ++j) {
////		temp = nums[j];
////		if (temp == y) continue;
////		y = nums[j], z = 999;
////		for (int k = j+1; k < len; ++k) {
////			temp = nums[k];
////			if (temp == z) continue;
////			z = nums[k];
////			if (x+y+z == 0) ret.push_back({x,y,z});
////		}
////	}
////}
////return ret;
//上面的做法：会超时
//
//解放二：双指针法
//*/
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		//nums的大小应该是要求>=3,我们只需要排序后即可去除重复的情况
//		sort(nums.begin(), nums.end());
//		vector<vector<int>> ret;
//		int n = nums.size();
//		for (int first = 0; first < n-2; ++first) {
//			//q除去相同的情况
//			if (first > 0 && nums[first] == nums[first - 1]) continue;
//			//设置traget,third
//			int target = -nums[first], third = n-1;
//			for (int second = first + 1; second < n;second++) {
//				//除去相同的情况
//				if (second > first + 1 && nums[second] == nums[second - 1]) continue;
//
//				//第一次比较
//				while(second < third && target < nums[second] + nums[third]) third--;
//				//相遇就退出
//				if (third == second) break;
//				//第二次比较
//				if(target == nums[second] + nums[third]) ret.push_back({nums[first], nums[second], nums[third]});
//			}
//		}
//		return ret;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums = {-1, 0, 1, 2, -1, -4};
//	vector<vector<int>> ret;
//	ret = S.threeSum(nums);
//	for (auto v : ret) {
//		for_each(v.begin(), v.end(), [](int a) {cout << a << ends; });
//		cout << endl;
//	}
//	return 0;
//}