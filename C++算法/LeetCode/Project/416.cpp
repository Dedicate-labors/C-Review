//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//using namespace std;
//
////�ҵĽ���˼·�������Ϊ�Ӽ�A��B�������Ӽ��ĺ����=����͵�һ��
////ͨ��DFS�ҵ���Ӧ������Ԫ����� ����͵�һ��,DFS����̫��ʱ�ˡ���
////ʹ�ö�̬�滮����DFS
////class Solution {
////public:
////	bool canPartition(vector<int>& nums) {
////		int n = nums.size();
////		if (n <= 1) return false;
////		int sum = accumulate(nums.begin(), nums.end(), 0);
////		//�������ж�һ��sum����ż
////		if (sum % 2 != 0) return false;
////		int target = sum / 2;
////		//��̬�滮���ҵ�target��Ӧ��Ԫ������
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
////��⣺https://leetcode-cn.com/problems/partition-equal-subset-sum/solution/fen-ge-deng-he-zi-ji-by-leetcode-solution/
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
//		//����������ͷ���false
//		if (sum & 1) return false;
//		int target = sum / 2;
//		//�Ͼ�target��һ���С�����maxNum������������һ��һ������С
//		if (maxNum > target) return false;
//		//����𰸵Ķ�̬�滮��������Ҫ���ӣ�ԭ������ͨ��ԭ��Դ�������˽�һ����
//		vector<int> dp(target+1, 0);
//		dp[0] = true;
//		//�±���ǡ��͡����Ƿ���Ԫ������ɸ��±�
//		for (int i = 0; i < n; ++i) {
//			int num = nums[i];
//			for (int j = target; j >= num; --j) {
//				//dp[j]�Ľ�� ���� �Ƿ�Ҫnum,��Ҫ�Ļ���dp[j] = dp[j],Ҫ�Ļ�dp[j] = dp[j-num]
//				//�������߶�Ҫ���ǣ�����dp[j] = dp[j] | dp[j-num],�����true��OK
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