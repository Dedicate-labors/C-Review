//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<Windows.h>
//using namespace std;
//
///*
//���ظ�����Ԫ�飬����Ҫ����
//��Ԫ��֮�� == target
//*/
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target) {
//		sort(nums.begin(), nums.end());
//		int n = nums.size();
//		int i = 0, j;
//		vector<vector<int>> cd, ret; //���cd, ��Ž��
//		for(i = 0; i < n; ++i){
//			for (j = i + 1; j < n; j++) {
//				int a = nums[i], b = nums[j];
//				cd = findCD(nums, j+1, n-1, target - (a + b));
//				if (cd.size() >= 1) {
//					for (auto it : cd) {
//						ret.push_back({ a,b,it[0], it[1]});
//					}
//				}
//			}
//		}
//		return ret;
//	}
//private:
//	vector<vector<int>> findCD(vector<int>& nums,int i, int j,int target); //�ڸ���nums�ҵ�c + d = target��,c,d�Ķ�Ԫ��
//};
//
//vector<vector<int>> Solution::findCD(vector<int>& nums, int i, int j, int target) {
//	//ps�������numsҪ����sort�����
//	int begin = i;
//	vector<vector<int>> ret;
//	for (i; i < j; ++i) {
//		//ȥ����ͬ��
//		if (i > begin && nums[i] == nums[i - 1]) continue;
//		while (i < j && nums[i] + nums[j] > target) --j;
//		if (i == j) break;
//
//		if (nums[i] + nums[j] == target) ret.push_back({nums[i], nums[j]});
//	}
//	return ret;
//}
//
//int main() {
//	Solution S;
//	vector<int> nums = {-3, -1, 0, 0,1, 2, 3};
//	vector<vector<int>> ret;
//	ret = S.fourSum(nums, 0);//0 2 | -1 3
//	for (auto num : ret)
//	{
//		printf("%d %d %d %d\n", num[0], num[1], num[2], num[3]);
//	}
//	return 0;
//}