//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int n = nums.size();
//		//dp[i]�ĺ�������iΪ��β�ĺ�����ַ��������Դ�i�±���ӽǳ���
//		//Ҫô�ǵ���nums[i],Ҫô������ǰ����Ӵ���dp[i-1]+nums[i]�Ǹ��������Ӵ�
//		//����˭��˭������iΪ��β�ĺ�����ַ���
//		vector<int> dp(n, 0);
//		dp[0] = nums[0];
//		for (int i = 1; i < n; ++i) {
//			dp[i] = max(nums[i], dp[i - 1] + nums[i]);
//		}
//		return *max_element(dp.begin(), dp.end());
//	}
//
//	//��д��
//	int maxSubArray2(vector<int>& nums) {
//		int ans = nums[0], pre = 0;
//		for (auto it : nums) {
//			pre = max(it, it+pre);
//			ans = max(ans, pre);
//		}
//		return ans;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
//	cout << S.maxSubArray(nums) << endl;
//	return 0;
//}