//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////�������������飬�±��ʾԤԼ������ֵ��ʾʱ��
////Ҫ��1.�����������ڣ�2. ��ԤԼʱ���
////��ȫû�뷨������QWQ
//class Solution {
//public:
//	int massage(vector<int>& nums) {
//		int n = nums.size();
//		if (!n) return 0;
//		//dp0����ѡ��ǰnums[i]���ԤԼʱ��
//		//dp1����ѡ��ǰnums[i]���ԤԼʱ��
//		int dp0 = 0, dp1 = nums[0];
//		for (int i = 1; i < n; ++i) {
//			int tp0 = max(dp0, dp1);
//			int tp1 = dp0 + nums[i];
//			dp0 = tp0;
//			dp1 = tp1;
//		}
//		return max(dp0, dp1);
//	}
//};
//
//int main() {
//
//	return 0;
//}