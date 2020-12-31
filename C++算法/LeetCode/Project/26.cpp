//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////题目：传入一个排序数组，O(1)空间修改之后返回一个修改好的nums的长度
//
////解法1：相同的一定会堆在一起，使用迭代器动态删除相同的
////解法2：使用双指针，但没有真正删除元素，只是将元素累积到末尾
////i=0,j=1开始遍历数组，找到nums[i] != nums[j],将nums[i+1] = nums[j]
////++i,j++,直到j到达末尾下标
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		vector<int>::iterator begin = nums.begin();
//		int left = *begin, right;
//		begin++;
//		while (begin != nums.end())
//		{
//			right = *begin;
//			if (left == right) {
//				begin = nums.erase(begin);
//			}
//			else {
//				begin++;
//				left = right;
//			}
//		}
//		return nums.size();
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums = {1,1,2};
//	S.removeDuplicates(nums);
//	return 0;
//}