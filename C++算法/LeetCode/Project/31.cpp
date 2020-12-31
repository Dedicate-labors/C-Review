//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//根据掌握的知识求出下一个字典序排列，不难，但必须原地修改
//	void nextPermutation(vector<int>& nums) {
//		int i, j, len = nums.size(); //由于是升序变大，所以从后往前找第一个A[i] < A[j]的情况，找不到说明已经是最大的了
//		i = len - 2, j = len - 1;
//		while (i >= 0 && nums[i] >= nums[j]) {
//			--i;
//			--j;
//		}
//		if (i < 0) {
//			sort(nums.begin(), nums.end());
//			return; //因为已经是最大的了或者其他不满足的情况,应该变回最小的情况
//		}
//		//退出循环的时候，nums[i] < nums[j]
//		//找到后，[j,end)必是降序，所以寻找恰好大于nums[i]的nums[k],在[j,end)中，从后往前找
//		//swap(nums[i], nums[k]);
//		//在排序[j, end)使其成为升序，变小
//		int k = len-1;
//		while (k >= j) {
//			if (nums[k] > nums[i]) break;
//			--k;
//		}
//		swap(nums[i], nums[k]);
//		//排序[j, end)
//		sort(nums.begin()+j, nums.end());
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> arr{3, 2, 1};
//	S.nextPermutation(arr);
//	for_each(arr.begin(), arr.end(), [](int &num) { cout << num << ends; });
//	return 0;
//}