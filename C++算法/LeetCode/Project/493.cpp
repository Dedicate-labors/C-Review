//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//
////����һ���������⣬�������Ҳ��Ҫ�������˳��,�������ⳬʱ��
////�����������ֻѭ��һ�������⡣˫ָ��i, j  i < j
//
//class Solution {
//public:
//	int reversePairs(vector<int>& nums) {
//		int size = nums.size();
//		int count = 0, half;
//		for (int i = 0; i < size-1; ++i) {
//			//�õ�nums[i]
//			if (nums[i] != INT_MAX)
//				half = (nums[i] + 1) / 2; //�����ż����(nums[i]+1)/2 == nums[i]/2��������ȡ����
//			else half = nums[i] / 2 + 1;
//			for (int j = i + 1; j < size; ++j) {
//				if (half > nums[j]) count++;
//			}
//		}
//		return count;
//	}
//
//	//�鲢����������
//	int reversePairs2(vector<int>& nums) {
//		if (nums.size() == 0) return 0;
//		return reversePairsRecursive(nums, 0, nums.size()-1);
//	}
//
//	int reversePairsRecursive(vector<int>& nums, int left, int right) {
//		if (left >= right) return 0;
//		else {//left < right
//			int mid = left + (right - left) / 2;
//			int n1 = reversePairsRecursive(nums, left, mid);
//			int n2 = reversePairsRecursive(nums, mid+1, right);
//			int ans = n1 + n2;
//			//ͳ���±����Ŀ
//			int i = left;
//			int j = mid + 1;
//			while (i <= mid) {
//				while (j <= right && (long long)nums[i] > 2 * (long long)nums[j]) j++;
//				ans += (j - mid - 1);
//				i++;
//			}
//
//			//�ϲ�������������
//			vector<int> sorted(right-left+1);
//			int p1 = left, p2 = mid + 1;
//			int p = 0;
//			while (p1 <= mid || p2 <= right) {
//				if (p1 > mid) sorted[p++] = nums[p2++];
//				else if (p2 > right) sorted[p++] = nums[p1++];
//				else {
//					if (nums[p1] < nums[p2]) {
//						sorted[p++] = nums[p1++];
//					}
//					else {
//						sorted[p++] = nums[p2++];
//					}
//				}
//			}
//			for (int i = 0; i < sorted.size(); ++i) {
//				nums[left + i] = sorted[i];
//			}
//			return ans;
//		}
//	}
//};
//
//int main()
//{
//
//	return 0;
//}