//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<map>
//
//using namespace std;
//
////class Solution {
////public:
////	//长度为k的数组，该数字要最大：大->小的数组
////	//保持相对顺序？？如果没有这个要求使用能放置10个元素的桶排序
////	//方法一：
////	//函数func(nums1,nums2,max,ans,k)，判断余下数组数字中，找打最大的且后面的数字剩余数目足够ans剩余位数
////	//成功返回最大数字(max)和剩余数字(nums1,nums2,k)，失败则保持当前数据完好且从第二大下手继续
////	//所以剩余数字 永远 >= ans还差的数字位数，=的时候直接出结果(还是分下nums1,nums2)
////	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
////
////	}
////};
//
//class Solution {
//public:
//	//保持nums1和nums2的顺序不变，使用单调栈(栈底到栈顶是降序)
//	//分别求出x个nums1元素的保持相对顺序的降栈，y个nums2元素的保持相对顺序的降栈
//	//合并两个栈
//	//找到最大的栈
//	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
//		int m = nums1.size(), n = nums2.size();
//		vector<int> maxSubsequence(k, 0);
//		int start = max(0, k - n), end = min(k, m);
//		for (int i = start; i <= end; i++) {
//			//i是对nums1的取最大数的个数,所以上限是min(k,m)
//			//下限既是nums1至少要取出多少个元素，k > n，nums1就取k-n个，k <= n, 就从0开始
//			vector<int> subsequence1(MaxSubsequence(nums1, i));
//			vector<int> subsequence2(MaxSubsequence(nums2, k - i));
//			vector<int> curMaxSubsequence(merge(subsequence1, subsequence2));
//			if (compare(curMaxSubsequence, 0, maxSubsequence, 0) > 0) {
//				maxSubsequence.swap(curMaxSubsequence);
//			}
//		}
//		return maxSubsequence;
//	}
//
//	vector<int> MaxSubsequence(vector<int>& nums, int k) {
//		int length = nums.size();
//		vector<int> stack(k, 0);
//		int top = -1;
//		int remain = length - k;
//		//remain是剩余课选择数字，前面k个数字是必须的
//		//1. 当stack中的数字退出栈时，表示必定需要一个数字来补充，所以remain--
//		//stack[++top] = num压栈时
//		//2. 当top > k - 1时，num此时的下标i一定 >= k -1,所以remain
//		//while和if(top < k - 1)是一对，else{}自己也算一组逻辑
//		for (int i = 0; i < length; i++) {
//			int num = nums[i];
//			while (top >= 0 && stack[top] < num && remain > 0) {
//				top--;
//				remain--;
//			}
//			if (top < k - 1) {
//				stack[++top] = num;
//			}
//			else {
//				remain--;
//			}
//		}
//		return stack;
//	}
//
//	vector<int> merge(vector<int>& subsequence1, vector<int>& subsequence2) {
//		int x = subsequence1.size(), y = subsequence2.size();
//		if (x == 0) {
//			return subsequence2;
//		}
//		if (y == 0) {
//			return subsequence1;
//		}
//		int mergeLength = x + y;
//		vector<int> merged(mergeLength);
//		int index1 = 0, index2 = 0;
//		for (int i = 0; i < mergeLength; i++) {
//			if (compare(subsequence1, index1, subsequence2, index2) > 0) {
//				merged[i] = subsequence1[index1++];
//			}
//			else {
//				merged[i] = subsequence2[index2++];
//			}
//		}
//		return merged;
//	}
//
//	int compare(vector<int>& subsequence1, int index1, vector<int>& subsequence2, int index2) {
//		int x = subsequence1.size(), y = subsequence2.size();
//		while (index1 < x && index2 < y) {
//			int difference = subsequence1[index1] - subsequence2[index2];
//			if (difference != 0) {
//				return difference;
//			}
//			index1++;
//			index2++;
//		}
//		return (x - index1) - (y - index2);
//	}
//};
//
//int main()
//{
//	int a = 7, b = 2;
//	int r;
//	r = a % b;
//	return 0;
//}