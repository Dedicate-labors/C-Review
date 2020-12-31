//#include<iostream>
//#include<vector>
//using namespace std;
//
////题目：对于给定排序好的数组nums,从[1..n]中选择任意数字加入nums中，使得
////[1..n]区间内的任何数字都可以用nums中某几个数字表示，求最少需要补充的数字个数
////规律1：对于正整数x，如果区间[1,x-1]内的所有数字都已经能被nums表示且x在nums中，那么[1, 2x-1]同样也能被nums表示
////规律2：若nums中能表示的[1..x-1]是连续的，添加x则扩展成表示[1..2x-1]是连续的，下一个 缺失的数字 不会小于2x
////题解对于求连续很巧妙
//
//class Solution {
//public:
//	int minPatches(vector<int>& nums, int n) {
//		int patches = 0;
//		long long x = 1; //此处的x表示连续的上限是x-1,[1..x-1]我们都认为且实现成了连续的
//		int length = nums.size(), index = 0; //nums元素遍历需要的变量
//		while (x <= n)
//		{
//			//当nums[index]存在且 <= x时， x本身将能被覆盖，且连续的上限变为 [1..x+nums[index]+1]
//			if (index < length && nums[index] <= x)
//			{
//				x += nums[index];
//				index++;
//			}
//			else {
//				//反之，x无法被表达，但记住此时的[1..x-1]是被表达出来了的，所以直接添加x到nums中，且连续的上限变为[1..2x-1]
//				x <<= 1;
//				patches++;
//			}
//		}
//		return patches;
//	}
//};
//
//int main()
//{
//	return 0;
//}