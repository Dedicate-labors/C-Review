//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//using namespace std;
//
////我的解题思路，数组分为子集A，B，两个子集的和相等=数组和的一半
////通过DFS找到对应的数组元素组成 数组和的一半,DFS哪里太耗时了。。
////使用动态规划减少DFS
////class Solution {
////public:
////	bool canPartition(vector<int>& nums) {
////		int n = nums.size();
////		if (n <= 1) return false;
////		int sum = accumulate(nums.begin(), nums.end(), 0);
////		//还可以判断一波sum是奇偶
////		if (sum % 2 != 0) return false;
////		int target = sum / 2;
////		//多态规划，找到target对应的元素数组
////		visited = new bool[n]{false};
////		dfs(target, nums);
////		delete[] visited;
////		return ret;
////	}
////private:
////	bool *visited;
////	bool ret = false;
////	void dfs(int target, vector<int> &nums);
////};
////
////void Solution::dfs(int target, vector<int> &nums) {
////	if (target <= 0) {
////		if (target == 0) ret = true;
////		return;
////	}
////	for (int i = 0; i < nums.size(); i++)
////	{
////		if (visited[i] == false) {
////			visited[i] = true;
////			dfs(target - nums[i], nums);
////			visited[i] = false;
////		}
////	}
////}
//
////题解：https://leetcode-cn.com/problems/partition-equal-subset-sum/solution/fen-ge-deng-he-zi-ji-by-leetcode-solution/
//class Solution {
//public:
//	bool canPartition(vector<int>& nums) {
//		int n = nums.size();
//		if (n < 2) return false;
//		int sum = 0, maxNum = 0;
//		for (auto& num : nums) {
//			sum += num;
//			maxNum = max(maxNum, num);
//		}
//		//如果是奇数就返回false
//		if (sum & 1) return false;
//		int target = sum / 2;
//		//毕竟target是一半大小，如果maxNum都比它大，那另一半一定比他小
//		if (maxNum > target) return false;
//		//这个答案的多态规划比它讲的要复杂，原因是它通过原理对代码进行了进一步简化
//		vector<int> dp(target+1, 0);
//		dp[0] = true;
//		//下标就是“和”，是否有元素能组成该下标
//		for (int i = 0; i < n; ++i) {
//			int num = nums[i];
//			for (int j = target; j >= num; --j) {
//				//dp[j]的结果 等于 是否要num,不要的话，dp[j] = dp[j],要的话dp[j] = dp[j-num]
//				//由于两者都要考虑，所以dp[j] = dp[j] | dp[j-num],如果有true就OK
//				dp[j] |= dp[j - num];
//			}
//		}
//		return dp[target];
//	}
//};
//
//int main() {
//	vector<int> nums{1, 12, 11};
//	Solution S;
//	bool ret;
//	ret = S.canPartition(nums);
//	cout << (ret == true ? "true" : "false") << endl;
//	return 0;
//}