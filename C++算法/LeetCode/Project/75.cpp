//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//我的方法还是太冒失了，容易出错，还是老实的用排序算法
//	void sortColors(vector<int>& nums) {
//		//使用快排的原理
//		int n = nums.size();
//		int povit = 1, count = 0;//轴心
//		int left = 0, right = n - 1;
//		//下面的排序将序列分为0和(1,2)
//		while (left < right)
//		{
//			while (left < right && nums[left] < povit)
//			{
//				++left;
//			}
//			swap(nums[left], nums[right]);
//			if (nums[right] == povit) count++;
//			while (left < right && nums[right] >= povit)
//			{
//				--right;
//				if (nums[right] == povit) count++;
//			}
//			swap(nums[left], nums[right]);
//		}
//		//如果为了更完美的解决问题，下面部分可以再使用一次快排
//		//right, n-1此处未排序好再加上count协助
//		if (count != 0) {
//			//下面循环的建立条件之一就是count必须存在
//			//将余下的序列前面count个设置为1
//			for (int j = right; j <= n - 1; ++j) {
//				if (count == 0) nums[j] = 2;
//				else if (nums[j] >= 1) {
//					nums[j] = 1;
//					count--;
//				}
//			}
//		}
//		for_each(nums.begin(), nums.end(), [](int &num) {cout << num << ' '; });
//	}
//	//题解思路和我的一样，但更简单
//	//单指针法
//	void sortColors2(vector<int>& nums) {
//		int n = nums.size();
//		int ptr = 0;
//		//将0全换到头部
//		for (int i = 0; i < n; ++i) {
//			if (nums[i] == 0) {
//				swap(nums[i], nums[ptr]);
//				ptr++;
//			}
//		}
//		//将1全换到0头部之后
//		for (int i = ptr; i < n; ++i) {
//			if (nums[i] == 1) {
//				swap(nums[i], nums[ptr]);
//				++ptr;
//			}
//		}
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums = {2,0,1};
//	S.sortColors(nums);
//	return 0;
//}