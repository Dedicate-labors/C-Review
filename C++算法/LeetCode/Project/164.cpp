//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	//����Ͱ����ķ���,n = nums.size(),����һ��n+1��Ͱ��ÿ��Ͱ��Χ��(max-min)/nΪ��Χ����
//	//nums��Ԫ�ط���Ͱ�У�������һ��ͰΪ��(n+1>n),��������ֵһ������Ͱ�ڣ�����Ͱ��
//	//ֻ��Ҫ��������Ͱ֮��,��T1,T2,T1�����ֵ��T2����Сֵ�����ߵĲ��
//	int maximumGap(vector<int>& nums) {
//		int n = nums.size(), max = 0, min = 0;
//		if (n < 2) return 0;
//		if (n == 2) return abs(nums[1] - nums[0]);
//
//		max = *max_element(nums.begin(), nums.end()), min = *min_element(nums.begin(), nums.end());
//		if (max - min == n - 1) return 1; //max - min >= n-1��
//		vector<vector<int>> barrel(n + 1); //n+1��Ͱ,Ͱ����
//		//����n��Ͱ����n-1��ʵ������,max-min �� n��ֱ�ӹ�ϵ��������˵max-min >= n���У�����d < 1
//		int d = 1;
//		if (max - min >= n)
//			d = (max - min) % n == 0 ? (max - min) / n : (max - min) / n + 1;
//		//j=0��Ͱ��Χ����min,  min + (j-1)*d< num<=min + j*d (j=1...n) 
//		//����n�����ݷ���n+1��Ͱ��,������һ��ͰΪ��
//		for (int i = 0; i < n; ++i) {
//			int num = nums[i];
//			int r = (num - min) % d;
//			if (r == 0) {
//				//r = 0, ��ô��num��������Ͱ����
//				barrel[(num - min) / d].push_back(num);
//			}
//			else {
//				barrel[(num - min) / d + 1].push_back(num);
//			}
//		}
//		//���������,����n+1��Ͱ,��һ��Ͱһ����min
//		int ans = 0;
//		max = min;
//		for (int i = 1; i < n + 1; ++i) {
//			if (barrel[i].size() != 0) {
//				min = *min_element(barrel[i].begin(), barrel[i].end());
//				if (min - max > ans) ans = min - max;
//				max = *max_element(barrel[i].begin(), barrel[i].end());
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums = {3, 6, 9, 1};
//	S.maximumGap(nums);
//	return 0;
//}
