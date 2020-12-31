//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////目的：返回一个摆动序列，可以使用单调栈
////一个数就是他本身，两个数就是两个数的差是否正数或负数
//
////dp[i]以i结尾的摆动序列长度,但nums[i]本身可以不要，if(nums[i+1] 比较 nums[i])
////dp[i+1] = dp[i] + 1 或者 dp[i+1] = dp[i];
//class Solution {
//public:
//	int wiggleMaxLength(vector<int>& nums) {
//		int size = nums.size();
//		if (size == 0) return  0;
//		if (size == 1) return 1;
//		//此处的size >= 2
//		vector<int> dp(size, 0);
//		dp[0] = 1; //前面的如果不相同就算2，相同就算1
//		int i = 1, j = 0;
//		while (i < size && nums[i] == nums[j])
//		{
//			dp[i] = 1;
//			i++;
//		}
//		if (i >= size) return 1;
//		dp[i] = 2;
//		int pre = nums[i] - nums[j], next;
//		j = i, i += 1; //j的定位不太清晰导致的错误，j定位应该是的“上顶”或者“山低”
//
//		while (i < size) 
//		{
//			//比较当前差和上一次的flag 是否 符号相同 或者 相等
//			next = nums[i] - nums[j];
//			if (next == 0) {
//				dp[i] = dp[i - 1]; //nums[i]本身不要
//			}
//			else {
//				if ((next >> 31) != (pre >> 31)) {
//					dp[i] = dp[i - 1] + 1;
//				}
//				else {
//					dp[i] = dp[i - 1]; //nums[i]本身不要
//				}
//				pre = next;
//				j = i;
//			}
//			++i;
//		}
//		return dp[size - 1];
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> tmp = {33,53,12,64,50,41,45};
//	S.wiggleMaxLength(tmp);
//	return 0;
//}